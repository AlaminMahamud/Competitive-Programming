#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

struct node{
    int data;
    struct node* next;
};

node* createNewNode(int d){
    node *temp= (struct node*)malloc(sizeof(struct node*));
    temp->data = d;
    temp->next = NULL;
    return temp;
}

void radixSort(int a[], int _size){



    node *zeroth = (struct node*)malloc(sizeof(struct node*));
    node *first = (struct node*)malloc(sizeof(struct node*));
    node *second = (struct node*)malloc(sizeof(struct node*));
    node *third = (struct node*)malloc(sizeof(struct node*));
    node *fourth = (struct node*)malloc(sizeof(struct node*));
    node *fifth = (struct node*)malloc(sizeof(struct node*));
    node *sixth = (struct node*)malloc(sizeof(struct node*));
    node *seventh = (struct node*)malloc(sizeof(struct node*));
    node *eighth = (struct node*)malloc(sizeof(struct node*));
    node *ninth = (struct node*)malloc(sizeof(struct node*));

    int n=1;
    int m=10;

    while(--digits){

        for(int i=0; i<n; i++){
            int c = a[i]%m;
            int d = c/n;
            node *temp = createNewNode(n);
            switch(d){
                case 0:
                    zeroth = zeroth->next = temp;
                    delete(temp);
                    break;
                case 1:
                    first = first->next = temp;
                    delete(temp);
                    break;
                case 2:
                    second = second->next = temp;
                    delete(temp);
                    break;
                case 3:
                    third = third->next = temp;
                    delete(temp);
                    break;
                case 4:
                    fourth = fourth->next = temp;
                    delete(temp);
                    break;
                case 5:
                    fifth = fifth->next = temp;
                    delete(temp);
                    break;
                case 6:
                    sixth = sixth->next = temp;
                    delete(temp);
                    break;
                case 7:
                    seventh = seventh->next = temp;
                    delete(temp);
                    break;
                case 8:
                    eighth = eighth ->next = temp;
                    delete(temp);
                    break;
                case 9:
                    ninth = ninth->next = temp;
                    delete(temp);
                    break;
            }
        }

        m *= 10;
        n *= 10;
    }
}

void printArray(int a[], int _size){
    for(int i=0; i<_size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    int a[t];
    for(int i=0; i<t; i++)
        cin>>a[i];
    radixSort(a,t);
    printArray(a,t);
    return 0;
}
