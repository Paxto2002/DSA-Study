#  _____________________
# | prev | data | next |
# _____________________
class Node:
    def __init__(self, value, next=None, prev=None):
        self.prev = prev
        self.data = value
        self.next = next
        # Time: O(1)
        # Space: O(1)


class DoublyLinkedList:
    def __init__(self, head=None):
        self.head = head
        # Time: O(1)
        # Space: O(1)

    def insert_at_end(self, value):
        # Time Complexity:
        # Best: O(1)   (when list is empty)
        # Avg:  O(n)
        # Worst: O(n)
        # Space: O(1)

        temp = Node(value)
        if self.head is None:
            self.head = temp
            return
        else:
            t = self.head
            while t.next is not None:
                t = t.next
            t.next = temp
            temp.prev = t

    def insert_at_start(self, value):
        temp = Node(value)
        if self.head is None:
            self.head = temp
            return
        temp.next = self.head  # New node points to old head
        self.head.prev = temp  # Old head points back to new node
        self.head = temp  # Update head to new node
    def insert_in_middle(self, value, x):
        temp = Node(value)

        if self.head is None:
            self.head = temp
            return

        t = self.head
        while t is not None:
            if t.data == x:

                # Case 1: inserting after last node
                if t.next is None:
                    t.next = temp
                    temp.prev = t
                else:
                    # Case 2: inserting in actual middle
                    temp.next = t.next
                    t.next.prev = temp
                    t.next = temp
                    temp.prev = t

                return   # stop here after successful insert

            t = t.next

        print(f"Value {x} not found in the list")

    def print_doubly_linked_list(self):
        # Time Complexity:
        # Best: O(n)
        # Avg:  O(n)
        # Worst: O(n)
        # Space: O(1)

        if self.head is None:
            print("Linked List is empty")
            return

        t = self.head
        while t is not None:
            if t.next is not None:
                print(f"{t.data} <<==>> ", end="")
            else:
                print(f"{t.data} <<==>> None")
            t = t.next


obj = DoublyLinkedList()
obj.insert_at_end(10)
obj.print_doubly_linked_list()
obj.insert_at_end(20)
obj.print_doubly_linked_list()
obj.insert_at_end(30)
obj.print_doubly_linked_list()
obj.insert_at_end(40)
obj.print_doubly_linked_list()
obj.insert_at_end(50)
obj.print_doubly_linked_list()
obj.insert_at_start(5)
obj.print_doubly_linked_list()
