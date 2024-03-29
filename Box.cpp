#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

class Box {
    private:
        int length, breath, height;
    public:
        Box() { length = breath = height = 0;}
        Box(int, int, int);
        int getLength();
        int getHeight();
        int getBreath();
        int CalculateVolume(); 
        // bool operator<(const Box&);
};
Box::Box(int l, int w, int h){
    length = l;
    breath = w;
    height = h;
}

int Box::getLength()
{
    return length;
}

int Box::getBreath(){
    return breath;
}
int Box::getHeight(){
    return height;
}

int Box::CalculateVolume(){
    return length * breath *height;
}

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
bool operator<(Box& a, Box& b) {
    int vol = a.getLength() * a.getBreath() * a.getHeight();
    int vol2 = b.getLength() * b.getBreath() * b.getHeight();
    if (vol < vol2){
        return true;
    } else {
        return false;
    }
}

//Overload operator << as specified
ostream& operator<<(ostream& out, Box& B){
    out<<B.getLength() << " " << B.getBreath()<< " " << B.getHeight();
    return out;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
