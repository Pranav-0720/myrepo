#include <iostream>
using namespace std;
class book{
	private:
		string title;
		string author;
		float price;
	public:
		book(){
			title="unknown";
			author="unknown artist";
			price=0.0;
		}
		book(string t,stgring a,float p){
			title= t;
			author= a;
			price=p;
		}
		book(const book &s){
			title=s.title;
			author=s.author;
			price=s.price;
		}
		void display(){
			cout <<"title: "<<title<<endl;
			cout<<"author of books : "<<author<<endl;
			cout <<" price: "<<price<<endl;
		}
};
int main(){
	book  b;
	book b2("panchatantra","vishnu sharma",550.60);
	book b3=b2;
	cout <<"default constructor"<<endl;
	b.display();
	cout<<"parameterized constructor"<<endl;
	b2.display();
	cout <<"copy constructor"<<endl;
	b3.display();

	return 0;
}
