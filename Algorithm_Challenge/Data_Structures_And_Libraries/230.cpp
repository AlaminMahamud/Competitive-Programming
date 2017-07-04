#include <bits/stdc++.h>
using namespace std;

struct book{
  string author, title;
  inline bool operator<(const book& other) const{
    if (author != other.author)
      return author < other.author;
    return title < other.title;
  }
};

void print(const vector<book> &books){
  int size = books.size();
  for(int i = 0; i < size; i++){
    cout <<books[i].author << endl;
    cout <<books[i].title << endl;
  }
}

int main(){
  // data input
  vector<book> books,abooks;
  string line;
  map<string, bool> m;
  map<string, int> p;
  while(getline(cin, line)){
    if(line == "END") break;

    // first and second
    // find string pos
    string first = line.substr(1,line.find("\"",2)-1);
    string second = line.substr(line.find("by")+3);

    book temp;
    temp.author = second;
    temp.title = first;
    books.push_back(temp);
    m[second] = false;
  }

  // sort
  sort(books.begin(), books.end());

  // commnads
  int size = books.size();
  for(int i = 0; i < size; i++){
    p[books[i].title] = i;
  }

  vector<string> lines;
  while(getline(cin,line)){
    if(line == "END") break;
    int first = line.find("\"");
    int si = line.length();
    string title = line.substr(first+1, si - 2 - first);
    if(line[0] == 'B'){
      m[title] = true;
    }
    else if(line[0]=='R'){
      book temp2;
      temp2.author = books[p[title]].author;
      temp2.title = title;
      abooks.push_back(temp2);

    }else{
      sort(abooks.begin(), abooks.end());
      int zzs = abooks.size();
      for(int i = 0; i < zzs; i++){
        if(p[abooks[i].title] == 0 ){
           string t = "PUT \"" + title + "\" first";
           lines.push_back(t);
        }else{
          int z = p[abooks[i].title];
          int d = -1;
          for(int i = z-1; i >=0 ;i--){
            if(!m[books[i].title]) {d = i ; break;}
          }
          if(d == -1){
            string t = "PUT \"" + abooks[i].title + "\" first";
            lines.push_back(t);
          }else{
            string t = "PUT \"" + abooks[i].title + "\" after \"" + books[d].title + "\"";
            lines.push_back(t);
          }
        }
        m[abooks[i].title] = false;
      }

      for(string l : lines){
        cout << l << endl;
      }
      cout << "END" << endl;
    }
  }
  return 0;
}
