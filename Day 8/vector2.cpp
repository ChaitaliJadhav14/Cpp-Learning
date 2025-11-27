#include <iostream> 
#include <vector> 
using namespace std;
class Shopping_List_App
{
	private:
		vector<string> my_list;
	public:
		bool search_item(string item)
		{
			for(string i: my_list)
			{
				if(i==item)
					return  true;
		    }
		    return false;
		}
		
		void add(string item)
		{
			if(search_item(item)==false)
			{
				my_list.emplace_back(item);
		        cout<<"\n"<<item<<" added in list.";
			}
			else
				cout<<"\n"<<item<<" already in list";
		}		
}
int main() { 
vector<int> vec = {1, 2, 3}; 
// Add an element to the end 
vec.push_back(4); // vec = {1, 2, 3, 4} 
// Add an element using emplace_back (constructs in place) 
vec.emplace_back(5); // vec = {1, 2, 3, 4, 5} 
return 0; 
} 



