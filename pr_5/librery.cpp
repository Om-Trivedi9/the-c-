#include <iostream>
#include <string>
using namespace std;

class LibraryItem {
protected:
    string title;
    string author;
    string dueDate;

public:
    LibraryItem(string t, string a, string d) : title(t), author(a), dueDate(d) {}

    
    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() const = 0;

    
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getDueDate() const { return dueDate; }
    
    void setTitle(string newTitle) { title = newTitle; }
    void setAuthor(string newAuthor) { author = newAuthor; }
    void setDueDate(string newDueDate) { dueDate = newDueDate; }

    virtual ~LibraryItem() {}
};

class Book : public LibraryItem {
private:
    string ISBN;
public:
    Book(string t, string a, string d, string isbn) : LibraryItem(t, a, d), ISBN(isbn) {}

    void checkOut() override {
        cout << "Checking out book: " << title << endl;
        dueDate = "2 weeks from today";
    }

    void returnItem() override {
        cout << "Returning book: " << title << endl;
    }

    void displayDetails() const override {
        cout << "Book Title: " << title << ", Author: " << author << ", Due Date: " << dueDate << ", ISBN: " << ISBN << endl;
    }
};

class DVD : public LibraryItem {
private:
    int duration; 
public:
    DVD(string t, string a, string d, int dur) : LibraryItem(t, a, d), duration(dur) {}

    void checkOut() override {
        cout << "Checking out DVD: " << title << endl;
        dueDate = "1 week from today";
    }

    void returnItem() override {
        cout << "Returning DVD: " << title << endl;
    }

    void displayDetails() const override {
        cout << "DVD Title: " << title << ", Director: " << author << ", Due Date: " << dueDate << ", Duration: " << duration << " mins" << endl;
    }
};

class Magazine : public LibraryItem {
private:
    int issueNumber;
public:
    Magazine(string t, string a, string d, int issue) : LibraryItem(t, a, d), issueNumber(issue) {}

    void checkOut() override {
        cout << "Checking out magazine: " << title << endl;
        dueDate = "3 days from today";
    }

    void returnItem() override {
        cout << "Returning magazine: " << title << endl;
    }

    void displayDetails() const override {
        cout << "Magazine Title: " << title << ", Author: " << author << ", Due Date: " << dueDate << ", Issue Number: " << issueNumber << endl;
    }
};

void displayMenu() {
    cout << "\nLibrary Management System Menu:" << endl;
    cout << "1. Add a Book" << endl;
    cout << "2. Add a DVD" << endl;
    cout << "3. Add a Magazine" << endl;
    cout << "4. Display all Items" << endl;
    cout << "5. Check out an Item" << endl;
    cout << "6. Return an Item" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    int itemCount = 0;
    LibraryItem** libraryItems = nullptr; 

    while (true) {
        displayMenu();
        cin >> choice;
        cout << endl;

        if (choice == 7) {
            cout << "Exiting..." << endl;
            break;
        }

        switch (choice) {
            case 1: { 
                string title, author, isbn, dueDate;
                cout << "Enter book title: ";
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter ISBN: ";
                getline(cin, isbn);
                cout << "Enter due date: ";
                getline(cin, dueDate);

                
                LibraryItem** temp = new LibraryItem*[itemCount + 1];
                for (int i = 0; i < itemCount; i++) {
                    temp[i] = libraryItems[i];
                }
                temp[itemCount] = new Book(title, author, dueDate, isbn);
                delete[] libraryItems;
                libraryItems = temp;
                itemCount++;

                cout << "Book added successfully!" << endl;
                break;
            }
            case 2: { 
                string title, author, dueDate;
                int duration;
                cout << "Enter DVD title: ";
                getline(cin, title);
                cout << "Enter director: ";
                getline(cin, author);
                cout << "Enter duration (in minutes): ";
                cin >> duration;
                cin.ignore();
                cout << "Enter due date: ";
                getline(cin, dueDate);

                LibraryItem** temp = new LibraryItem*[itemCount + 1];
                for (int i = 0; i < itemCount; i++) {
                    temp[i] = libraryItems[i];
                }
                temp[itemCount] = new DVD(title, author, dueDate, duration);
                delete[] libraryItems;
                libraryItems = temp;
                itemCount++;

                cout << "DVD added successfully!" << endl;
                break;
            }
            case 3: { 
                string title, author, dueDate;
                int issueNumber;
                cout << "Enter magazine title: ";
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter issue number: ";
                cin >> issueNumber;
                cin.ignore();
                cout << "Enter due date: ";
                getline(cin, dueDate);

                LibraryItem** temp = new LibraryItem*[itemCount + 1];
                for (int i = 0; i < itemCount; i++) {
                    temp[i] = libraryItems[i];
                }
                temp[itemCount] = new Magazine(title, author, dueDate, issueNumber);
                delete[] libraryItems;
                libraryItems = temp;
                itemCount++;

                cout << "Magazine added successfully!" << endl;
                break;
            }
            case 4: { 
                for (int i = 0; i < itemCount; i++) {
                    libraryItems[i]->displayDetails();
                }
                break;
            }
            case 5: { 
                int index;
                cout << "Enter the index of the item to check out (starting from 0): ";
                cin >> index;
                if (index >= 0 && index < itemCount) {
                    libraryItems[index]->checkOut();
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            }
            case 6: { 
                int index;
                cout << "Enter the index of the item to return (starting from 0): ";
                cin >> index;
                if (index >= 0 && index < itemCount) {
                    libraryItems[index]->returnItem();
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    
    for (int i = 0; i < itemCount; i++) {
        delete libraryItems[i];
    }
    delete[] libraryItems;

    return 0;
}
