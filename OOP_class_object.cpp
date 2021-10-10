#include<iostream>
using namespace std;
class Song
{
	public:
	string title;
	string artist;
			//constructir
		Song(string new_title, string new_artist)
		{
			title  = new_title;
			artist = new_artist;
		}
			//destructor
		~Song()
		{
			cout<<"\nGoodbye "<<title<<"!";
		}
		 
		void set_title(string title_)
		{
			title = title_;
		}
		
		void set_artist(string artist_)
		{
			artist = artist_;
		}
		 
		string get_title()
		{
			return title;
		}
		
		string get_artist()
		{
			return artist;
		}
		
};
int main()
{

	
	Song mp3_1("Perfect","Ed sheeran");
	Song mp3_2("Let it rain over me","Pitbull");
	cout<<"mp3_1 title is: "<<mp3_1.get_title()<<endl;
	cout<<"mp3_1 artist is: "<<mp3_1.get_artist()<<endl;
	cout<<"mp3_2 title is: "<<mp3_2.get_title()<<endl;
	cout<<"mp3_2 artist is: "<<mp3_2.get_artist()<<endl;;
	
	Song mp3_3("","");
	mp3_3.set_title("demon");
	mp3_3.set_artist("Imagine dragon");
	
	cout<<"mp3_3 title is: "<<mp3_3.get_title()<<endl;
	cout<<"mp3_3 artist is: "<<mp3_3.get_artist()<<endl;;
	
	return 0;
}
