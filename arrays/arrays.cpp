#include <iostream>

using namespace std;

const int MAX = 5;

class array 
{
	private:
		int arr[MAX];

	public: 
		void insert( int pos, int num );
		void del( int pos );
		void reverse();
		void display();
		void search( int num );
};

// inserts an element num at given position pos
void array::insert( int pos, int num ) 
{
	// shift element to right
	for ( int i = MAX - 1; i >= pos; i-- )
		arr[i] = arr[i - 1];
	arr[pos - 1] = num;
}

// deletes an element from the given position pos
void array::del( int pos ) 
{
	int i;
	// skip to desired position
	for ( i = pos; i < MAX; i++ ) 
		arr[i - 1] = arr[i];
	arr[i - 1] = 0;
}

// reverses the entire array
void array::reverse() 
{	
	int temp;
	for ( int i = 0; i < MAX / 2; i++ ) 
	{
		temp = arr[MAX - 1 - i];
		arr[MAX - 1 - i] = arr[i];
		arr[i] = temp;
	}
}

// displays the contents of an array
void array::display() 
{
	for ( int i = 0; i < MAX; i++ ) 
		cout << arr[i] << " ";
	cout << endl;
}

// searches array for a given element num
void array::search( int num ) 
{
	for( int i = 0; i < MAX; i++ ) 
	{
		if ( arr[i] == num ) 
		{
			cout << "Element " << num << " is present at " << i + 1 << "th position" << endl;
			return;
		}
	}
	cout << "Element " << num << " is absent" << endl;
}

int main() 
{
	array a;
	a.insert( 1,11 );
	a.insert( 2,12 );	
	a.insert( 3,13 );	
	a.insert( 4,14 );	
	a.insert( 5,15 );	

	cout << endl << "Elements of Array: ";

	a.display();

	a.del( 5 );
	a.del( 2 );

	cout << endl << "After deletion: ";

	a.display();

	a.insert( 2, 222 );
	a.insert( 5, 555 );

	cout << endl << "After insertion: ";

	a.display();
	a.reverse();

	cout << endl << "After reversing: ";

	a.display();

	a.search( 222 );
	a.search( 666 );
	return 0;
}
