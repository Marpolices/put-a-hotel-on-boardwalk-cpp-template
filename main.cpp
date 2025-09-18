#include <iostream>
#include <string>

using namespace std; 

template <typename T>
class CircularLinkedList {
private:
  struck Node {
    T data;
    Node* next;
    Node(const T& value) : data(value), next(nullptr) {}
  };

  Node* head;
  Node* tail;

  public:
  Node* current;

  CircularLinkedList() : head(nullptr), tail(nullptr), current(nullptr) {}

  void append (const T& value) {
    Node* newNode = new Node(value);
    if (!head) {
      head = tail = newNode;
      newNode ->next = head;
    } else {
       tail -> next = newNode;
       tail = newNode;
       tail -> next = head;
    }
    if (!current) current = head;
    }

    void step() {
      if (current) current = current ->next;
    }
    T currentNode() const {
      if (current) return current -> data;
      throw std::runtime_error("List is empty)";
    }

  
    };








int main() {
    CircularLinkedList<string> monopolyBoard;

    
    monopolyBoard.append("Go");
    monopolyBoard.append("Mediterranean Avenue");
    monopolyBoard.append("Community Chest");
    monopolyBoard.append("Baltic Avenue");
    monopolyBoard.append("Income Tax");
    monopolyBoard.append("Reading Railroad");
    monopolyBoard.append("Oriental Avenue");
    monopolyBoard.append("Chance");
    monopolyBoard.append("Vermont Avenue");
    monopolyBoard.append("Connecticut Avenue");
    monopolyBoard.append("Jail (Just Visiting)");
    monopolyBoard.append("St. Charles Place");
    monopolyBoard.append("Electric Company");
    monopolyBoard.append("States Avenue");
    monopolyBoard.append("Virginia Avenue");
    monopolyBoard.append("Pennsylvania Railroad");
    monopolyBoard.append("St. James Place");
    monopolyBoard.append("Community Chest");
    monopolyBoard.append("Tennessee Avenue");
    monopolyBoard.append("New York Avenue");
    monopolyBoard.append("Free Parking");
    monopolyBoard.append("Kentucky Avenue");
    monopolyBoard.append("Chance");
    monopolyBoard.append("Indiana Avenue");
    monopolyBoard.append("Illinois Avenue");
    monopolyBoard.append("B&O Railroad");
    monopolyBoard.append("Atlantic Avenue");
    monopolyBoard.append("Ventnor Avenue");
    monopolyBoard.append("Water Works");
    monopolyBoard.append("Marvin Gardens");
    monopolyBoard.append("Go to Jail");
    monopolyBoard.append("Pacific Avenue");
    monopolyBoard.append("North Carolina Avenue");
    monopolyBoard.append("Community Chest");
    monopolyBoard.append("Pennsylvania Avenue");
    monopolyBoard.append("Short Line Railroad");
    monopolyBoard.append("Chance");
    monopolyBoard.append("Park Place");
    monopolyBoard.append("Luxury Tax");
    monopolyBoard.append("Boardwalk");

  cout << "Starting position: " << monopolyBoard.currentNode() << "\n";

  monopolyBoard.step();
  cout << "After 1 step: " << monopolyBoard.currentNode() << "\n";

  monopolyBoard.step();
  monopolyBoard.step();
  monopolyBoard.step();
  cout << "After 4 step: " << monopolyBoard.currentNode() << "\n";

  for (int i = 0; i < 37; i++) {
    monopoly.step();
  }
  cout << "After looping around: " << monopolyBoard.currentNode() << "\n";
}