class Node:
    def __init__(self, info, next=None):
        self.data = info
        self.next = next

class SinglyLinkedList:
    def __init__(self, head=None):
        self.head = head

    # -------------------------------
    # Insert Methods
    # -------------------------------

    # Insert at the end
    def insert_at_end(self, value):
        temp = Node(value)
        if self.head is None:
            self.head = temp
        else:
            t1 = self.head
            while t1.next is not None:
                t1 = t1.next
            t1.next = temp

    # Insert at the start
    def insert_at_start(self, value):
        temp = Node(value)
        temp.next = self.head
        self.head = temp

    # Insert after a given value x
    def insert_in_middle(self, value, x):
        temp = Node(value)
        if self.head is None:
            self.head = temp
            return
        t1 = self.head
        while t1 is not None:
            if t1.data == x:
                temp.next = t1.next
                t1.next = temp
                return
            t1 = t1.next
        print(f"Value {x} not found in the list")

    # -------------------------------
    # Delete Methods
    # -------------------------------

    # Delete from start
    def delete_from_start(self):
        if self.head is None:
            print("Linked List is empty")
        else:
            deleted_value = self.head.data
            self.head = self.head.next
            print(f"Deleted {deleted_value} from start")

    # Delete from end
    def delete_from_end(self):
        if self.head is None:
            print("Linked List is empty")
            return

        # Only one node
        if self.head.next is None:
            deleted_value = self.head.data
            self.head = None
            print(f"Deleted {deleted_value} from end")
            return

        # More than one node
        t1 = self.head
        while t1.next.next is not None:  # stop at second-last node
            t1 = t1.next
        deleted_value = t1.next.data      # value of last node
        t1.next = None                    # remove last node
        print(f"Deleted {deleted_value} from end")

    # Delete a node by value (middle)
    def delete_from_middle(self, value):
        if self.head is None:
            print("Linked List is empty")
            return

        # If the node to delete is the head
        if self.head.data == value:
            self.delete_from_start()
            return

        t1 = self.head
        while t1.next is not None:
            if t1.next.data == value:
                # Check if this is the last node
                if t1.next.next is None:
                    print(f"Deleted {value} from last")
                else:
                    print(f"Deleted {value} from middle")
                t1.next = t1.next.next
                return
            t1 = t1.next

        print(f"Value {value} not found in the list")

    # -------------------------------
    # Print Method
    # -------------------------------
    def print_linked_list(self):
        if self.head is None:
            print("Linked List is empty")
            return
        t1 = self.head
        while t1 is not None:
            if t1.next is not None:
                print(f"{t1.data} -> ", end="")
            else:
                print(f"{t1.data} -> None")
            t1 = t1.next

# -------------------------------
# Example usage
# -------------------------------
obj = SinglyLinkedList()

# Insert at end
obj.insert_at_end(10)
obj.insert_at_end(20)
obj.insert_at_end(30)
obj.print_linked_list()  # 10 -> 20 -> 30 -> None

# Insert at start
obj.insert_at_start(5)
obj.print_linked_list()  # 5 -> 10 -> 20 -> 30 -> None

# Insert in middle (after 20)
obj.insert_in_middle(25, 20)
obj.print_linked_list()  # 5 -> 10 -> 20 -> 25 -> 30 -> None

# Delete from start
obj.delete_from_start()
obj.print_linked_list()  # 10 -> 20 -> 25 -> 30 -> None

# Delete from end
obj.delete_from_end()
obj.print_linked_list()  # 10 -> 20 -> 25 -> None

# Delete a node by value (middle)
obj.delete_from_middle(20)
obj.print_linked_list()  # 10 -> 25 -> None

# Delete last node using delete_from_middle
obj.delete_from_middle(25)
obj.print_linked_list()  # 10 -> None

# Delete remaining node using delete_from_middle
obj.delete_from_middle(10)
obj.print_linked_list()  # Linked List is empty

# Delete from empty list
obj.delete_from_end()        # Linked List is empty
obj.delete_from_middle(10)  # Linked List is empty