#include<iostream>
using namespace std;
struct Cricket_player
{
    char player_name[20];
    char team_name[20];
    float average;
    int highest_score;
};
main()
{
typedef struct Cricket_player PLR;
PLR P[10];
int i;
cout<<"enter player name"<<"\t";

for (i=1;i<=10; i++)
{
    cin>>P[i].player_name;
   // cin>>P[i].team_name;
    
cout<<P[1].player_name;
}

}