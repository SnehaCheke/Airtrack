

#include<iostream>
#include<cmath>
using namespace std;
int main()
{           
 int n=0;

	cout<<"\t\t\t__          __  _    \n";
	cout<<"\t\t\t\\\ \\\        / / | |                         \n";
	cout<<"\t\t\t \\\ \\\  /\\\  / /__| | ___ ___  _ __ ___   ___ \n";
	cout<<"\t\t\t  \\\ \\\/  \\\/ / _ \\\ |/ __/ _ \\\| '_ ` _ \\\ / _ \\\ \n";
	cout<<"\t\t\t   \\\  /\\\  /  __/ | (_| (_) | | | | | |  __/\n";
	cout<<"\t\t\t    \\\/  \\\/ \\\___|_|\\\___\\\___/|_| |_| |_|\\\___| \n";
	cout<<"\n";
	cout<<"\n";


	
	 cout<<"enter number of vertices of polygon= ";
	 cin>>n;

	float x[10],y[10],distance,max=0;
	cout<<"enter x and y co-ordinates = \n";

	for(int i=0;i<n;i++)
	{
	cin>>x[i]>>y[i];
	}
       
	          for(int k=0;k<n;k++)
       {
          for(int i=0;i<n;i++)
       {
	
	distance=sqrt(pow(x[k]-x[i+1],2)+pow(y[k]-y[i+1],2));
	
	cout<<"\ndistance = "<<distance;
	
	if(max<distance)
	{
	
	max=distance;
	
	}
	}
	}

	cout<<"\n Largest distance is  "<<max;
	return 0;
}
