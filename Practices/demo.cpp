#include <iostream>

// Define the structure for each node in the linked list
struct Node
{
      int data;
      Node *next;
};

// Function to create a new node
Node *createNode(int value)
{
      Node *newNode = new Node();
      newNode->data = value;
      newNode->next = nullptr;
      return newNode;
}

// Function to insert a new node at the beginning of the linked list
void insertNode(Node **head, int value)
{
      Node *newNode = createNode(value);
      newNode->next = *head;
      *head = newNode;
      std::cout << "Node with value " << value << " inserted successfully." << std::endl;
}

// Function to display the linked list
void displayList(Node *head)
{
      if (head == nullptr)
      {
            std::cout << "Linked list is empty." << std::endl;
            return;
      }

      Node *temp = head;
      std::cout << "Linked list: ";
      while (temp != nullptr)
      {
            std::cout << temp->data << " ";
            temp = temp->next;
      }
      std::cout << std::endl;
}

// Function to delete a node from the linked list
void deleteNode(Node **head, int value)
{
      if (*head == nullptr)
      {
            std::cout << "Linked list is empty. Deletion failed." << std::endl;
            return;
      }

      Node *temp = *head;
      Node *prev = nullptr;

      // If the node to be deleted is the head node
      if (temp != nullptr && temp->data == value)
      {
            *head = temp->next;
            delete temp;
            std::cout << "Node with value " << value << " deleted successfully." << std::endl;
            return;
      }

      // Find the node to be deleted
      while (temp != nullptr && temp->data != value)
      {
            prev = temp;
            temp = temp->next;
      }

      // If the node is not found
      if (temp == nullptr)
      {
            std::cout << "Node with value " << value << " not found in the linked list. Deletion failed." << std::endl;
            return;
      }

      // Unlink the node from the linked list
      prev->next = temp->next;
      delete temp;
      std::cout << "Node with value " << value << " deleted successfully." << std::endl;
}

// Function to update the value of a node in the linked list
void updateNode(Node *head, int oldValue, int newValue)
{
      if (head == nullptr)
      {
            std::cout << "Linked list is empty. Update failed." << std::endl;
            return;
      }

      Node *temp = head;
      bool found = false;

      // Find the node to be updated
      while (temp != nullptr)
      {
            if (temp->data == oldValue)
            {
                  temp->data = newValue;
                  found = true;
                  break;
            }
            temp = temp->next;
      }

      if (found)
      {
            std::cout << "Node with value " << oldValue << " updated to " << newValue << " successfully." << std::endl;
      }
      else
      {
            std::cout << "Node with value " << oldValue << " not found in the linked list. Update failed." << std::endl;
      }
}

int main()
{
      Node *head = nullptr;

      // Insert nodes into the linked list
      insertNode(&head, 10);
      insertNode(&head, 20);
      insertNode(&head, 30);

      // Display the linked list
      displayList(head);

      // Delete a node from the linked list
      deleteNode(&head, 20);

      // Display the updated linked list
      displayList(head);

      // Update a node in the linked list
      updateNode(head, 10, 50);

      // Display the updated linked list
      displayList(head);

      return 0;
}