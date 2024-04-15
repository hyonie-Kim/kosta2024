#include <iostream>
#include <memory>

using namespace std;

template <class T> class SmartPointer {
	private:
		T* p;

	public:
		SmartPointer(T *sp) {
			p = sp;
		}
		~SmartPointer(){
			delete p;
		}

		T& operator*() const {
			return *p;
		}
};

void main()
{

	SmartPointer<string> str(new string("test"));
	cout << *str << endl;
	
}
