#include <bits/stdc++.h>
using namespace std;

struct book{
  string author;
  string title;
  inline bool operator<(const book &other) const{
    if(author!=other.author){
      return author < other.author;
    }
    return title < other.title;
  }
};

void ReadBooks(vector<book> &AllBooks){
  string temp;
  book currentBook;
  while(cin >> temp, temp!="END"){
    currentBook.title = "";
    bool first = true;

    while(*(temp.end() - 1) != '"'){
      if(!first)
        currentBook.title += " ";
      first = false;
      currentBook.title += temp;
      cin >> temp;
    }

    if(!first)
      currentBook.title += ' ';

    currentBook.title += temp;

    // Ignore 'by'
    cin >> temp;

    // ignore the space after the by
    cin.ignore();

    getline(cin, currentBook.author);
    AllBooks.push_back(currentBook);
  }
}

int main(){
  vector<book> AllBooks;
  // ReadBooks
  ReadBooks(AllBooks);
  int numBooks = AllBooks.size();
  sort(AllBooks.begin(), AllBooks.end());
  map<string, int> positionInAllBooks;

  for(size_t i = 0; i < numBooks; i++){
    positionInAllBooks[AllBooks[i].title] = i;
  }

  vector<bool> borrowed(numBooks, false);
  vector<bool> returned(numBooks, false);

  string command;
  string bookName;
  while(cin >> command, command != "END"){
    if(command == "BORROW"){
      cin.ignore();
      getline(cin, bookName);
      int pos = positionInAllBooks[bookName];
      borrowed[pos] = true;
      returned[pos] = false;
    }
    else if(command == "RETURN"){
      cin.ignore();
      getline(cin, bookName);
      returned[positionInAllBooks[bookName]] = true;
    }
    else{
      // shelve
      int previous = -1;
      for(int i = 0; i < numBooks; i++){
        if(!borrowed[i])
          previous = i;
        else if (returned[i]){
          if(previous == -1)
            cout << "Put " << AllBooks[i].title << " first\n";
          else
            cout << "Put " << AllBooks[i].title << " after "
                 << AllBooks[previous].title  << "\n";
          returned[i] = false;
          borrowed[i] = false;
          previous = i;
        }
      }
      cout << "END\n";
    }
  }
}
