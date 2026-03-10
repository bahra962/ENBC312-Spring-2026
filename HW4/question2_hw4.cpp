#include <iostream>
using namespace std;

class Book {
private:
	string title;
	int pages;

public:
	void setTitle(string bookTitle) {
		title = bookTitle;
	}

	void setPages(int bookPages) {
		pages = bookPages;
	}

	void display(){
		cout << "Title of book: " << title << endl;
		cout << "Pages in book: " << pages << endl;
	}
};

int main(){
	Book book;
	book.setTitle("The Alchemist");
	book.setPages(208);
	book.display();

	return 0;
}
