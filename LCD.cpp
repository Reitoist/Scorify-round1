#include<bits/stdc++.h>
using namespace std;

int main()
{

    string in;
    string dict[26][7]={
    {" ### ","#   #","#   #","#####","#   #","#   #","#   #"},
    {"#### ","#   #","#   #","#####","#   #","#   #","#### "},
    {" ####","#    ","#    ","#    ","#    ","#    "," ####"},
    {"#### ","#   #","#   #","#   #","#   #","#   #","#### "},
    {"#####","#    ","#    ","#####","#    ","#    ","#####"},
    {"#####","#    ","#    ","#####","#    ","#    ","#    "},
    {" ####","#    ","#    ","#  ##","#   #","#   #"," ### "},
    {"#   #","#   #","#   #","#####","#   #","#   #","#   #"},
    {"#####","  #  ","  #  ","  #  ","  #  ","  #  ","#####"},
    {"#####","    #","    #","    #","    #","    #","#### "},
    {"#   #","#  # ","# #  ","##   ","# #  ","#  # ","#   #"},
    {"#    ","#    ","#    ","#    ","#    ","#    ","#####"},
    {"## ##","# # #","#   #","#   #","#   #","#   #","#   #"},
    {"#   #","#   #","##  #","# # #","#  ##","#   #","#   #"},
    {" ### ","#   #","#   #","#   #","#   #","#   #"," ### "},
    {"#### ","#   #","#   #","#### ","#    ","#    ","#    "},
    {" ### ","#   #","#   #","#   #","# # #","#  # "," ## #"},
    {"#### ","#   #","#   #","#### ","# #  ","#  # ","#   #"},
    {" ####","#    ","#    "," ### ","    #","    #","#### "},
    {"#####","  #  ","  #  ","  #  ","  #  ","  #  ","  #  "},
    {"#   #","#   #","#   #","#   #","#   #","#   #"," ### "},
    {"#   #","#   #","#   #","#   #","#   #"," # # ","  #  "},
    {"#   #","#   #","#   #","#   #","#   #","# # #"," # # "},
    {"#   #","#   #"," # # ","  #  "," # # ","#   #","#   #"},
    {"#   #","#   #"," # # ","  #  ","  #  ","  #  ","  #  "},
    {"#####","    #","   # ","  #  "," #   ","#    ","#####"}};
    while(cin>>in){
        for(int j=0;j<7;j++){
        for(int i=0;i<in.size();i++)
        {
            int index=in[i]-'A';
            string s=dict[index][j];
            cout<<s<<" ";
        }
        cout<<endl;
    }
    }


}