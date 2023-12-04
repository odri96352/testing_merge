#include "string.h"
#include<cstdlib>
#include<iostream>

void test_constructeur_default();
// void test_copy_constructor(string t);
// void test_c_str(string t);
// void test_clear();
// void test_constructor_c_string(char* s);
// void test_constructor_c_string_array(char* s, int size_t);
// int test_max_size();
// void test_operator_egal(char* s, string t, char c);
// void test_resize(string t);
// void test_resize_with_char(string t, char c);
// void test_operator_plus(string a, string b, char c);
// string operator+(const string& lhs, char rhs);
// string operator+(const string& lhs, const string& rhs);
// void test_reserve_and_capacity(string t);
// void test_empty(string t);


int main(){
  test_constructeur_default();

  // string test = string();
  // test_copy_constructor(test);
  // test_c_str(test);
  // test_clear();
  //
  // char a[] =  {'H', 'e', 'l', 'l', 'o', '\0'};
  // test_constructor_c_string(a);
  // int taille = 3;
  // test_constructor_c_string_array(a, taille);
  //
  // char b[] =  {'e','q', 'u', 'a', 'l',' ', 'o', 'p', 'e', 'r','a', 't', 'o', 'r', ' ', 'w', 'o', 'r', 'k', 's', ' ','w','i','t','h', ' ', 'a','r','r','a','y','s','\0'};
  // char c[] = {'e','q', 'u', 'a', 'l',' ', 'o', 'p', 'e', 'r','a', 't', 'o', 'r', ' ', 'w', 'o', 'r', 'k', 's', ' ','w','i','t','h', ' ','s','t','r','i','n','g','\0'};
  // string s = string (c);
  // test_operator_egal(b, s, 'w');
  // test_operator_plus(s,test,'s');
  //
  // test_reserve_and_capacity(test);
  //
  //
  // test_resize(test);
  // test_resize_with_char( test , ')');
  // test_empty(test);

  std::exit(EXIT_SUCCESS);
};

void test_constructeur_default(){
    std::cout << "test the default constructor"<<std::endl;
  string test = string();
  test.print();
  std::cout <<std::endl;
};

// void test_copy_constructor(string t){
//   std::cout << "test the copy constructor"<<std::endl;
//   string test_copy=string(t);
//   test_copy.print();
//   std::cout <<std::endl;
// };
//
// void test_c_str(string t){
//   std::cout << "test the conversion string to array of characters"<<std::endl;
//   std::cout<<t.c_str()<<std::endl;
// };
//
// void test_constructor_c_string(char* s){
//   std::cout << "test the constructor from an array of char"<<std::endl;
//   string output = string(s);
//   output.print();
//   std::cout <<std::endl;
// };
//
// void test_constructor_c_string_array(char* t, int size_t){
//   std::cout << "test the constructor from an array of char and limiting the size"<<std::endl;
//   string output = string(t, size_t);
//   output.print();
//   std::cout <<std::endl;
// };
//
// void test_clear(){
//   std::cout << "printing a cleared string"<<std::endl;
//   string test=string();
//   test.clear();
//   test.print();
//   std::cout <<std::endl;
// };
//
// int test_max_size(){};
//
// void test_resize(string t){
//   std::cout << "augmenter la taille de mon string"<<std::endl;
//   t.resize(t.size() + 1);
//   t.print();
//   std::cout<<std::endl;
//   std::cout << "diminuer la taille de mon string"<<std::endl;
//   t.resize(t.size() - 2);
//   t.print();
//   std::cout<<std::endl;
// };
//
// void test_resize_with_char(string t, char c){
//   std::cout << "rajouter des charactères à la fin de mon string"<<std::endl;
//   t.resize(t.size() + 2, c);
//   t.print();
//   std::cout<<std::endl;
// };
//
// void test_operator_egal(char* s, string t, char c){
//   std::cout << " = operator with array of characters"<<std::endl;
//   string output = s;
//   output.print();
//   std::cout <<std::endl;
//   std::cout << " = operator with an other string"<<std::endl;
//   output = t;
//   output.print();
//   std::cout <<std::endl;
//   std::cout << " = operator with a single char"<<std::endl;
//   output = c;
//   output.print();
//   std::cout <<std::endl;
// };
//
// string operator+(const string& lhs, char rhs){
//   //Returns a newly constructed string object
//   //with its value being the concatenation of
//   //the characters in lhs followed by those of rhs.
//
//   string string_temp=string(lhs);
//   char* contenu_de_string_temp=string_temp.c_str();
//   char tableau_temp[string_temp.size()+2];
//
//   for (int i = 0; i<string_temp.size(); ++i){ // "-1" pour ne pas récupérer '\0'
//       tableau_temp[i] = contenu_de_string_temp[i];
//   }
//   tableau_temp[string_temp.size()]=rhs;
//     tableau_temp[string_temp.size()+1]='\0';
//
//   string output=string(tableau_temp);
//   return output;
//
// };
//
// string operator+(const string& lhs, const string& rhs){
//   //Returns a newly constructed string object
//   //with its value being the concatenation of
//   //the characters in lhs followed by those of rhs.
//   string lhs_temp=string(lhs);
//   // std::cout<<"print copy of lhs" <<std::endl;
//   // lhs_temp.print();
//   string rhs_temp=string(rhs);
//   // std::cout<<"print copy of rhs" <<std::endl;
//   // rhs_temp.print();
//   int length= lhs_temp.size();
//   char* rhs_array_temp=rhs_temp.c_str();
//   // std::cout<<"print arrays of rhs" <<std::endl;
//   // std::cout << rhs_array_temp<<std::endl;
//   lhs_temp.reserve(length+rhs_temp.size());
//   // std::cout<<"print new capacity of arrays of lhs" <<std::endl;
//   // std::cout << lhs_temp.capacity()<<std::endl;
//
//   for (int i = 0; i<rhs_temp.size(); i++){
//       // std::cout<<"current character" <<std::endl;
//       // std::cout<<rhs_array_temp[i] <<std::endl;
//       lhs_temp = lhs_temp+ rhs_array_temp[i];
//       // std::cout<<"we added a new character" <<std::endl;
//       // lhs_temp.print();
//   }
//
//   return lhs_temp;
//
// };
//
// void test_reserve_and_capacity(string t){
//   std::cout<<"Testing the reserve and capacity function"<<std::endl;
//   std::cout<<"The string ";
//   t.print();
//   std::cout<<"takes up ";
//   std::cout<<t.capacity();
//   std::cout<<" bytes."<<std::endl;
//   t.reserve(t.size()+3);
//   std::cout<<"After increasing the capacity, the string ";
//   t.print();
//   std::cout<<"takes up ";
//   std::cout<<t.capacity();
//   std::cout<<" bytes."<<std::endl;
//   t.reserve(t.size()-1);
//   std::cout<<"After diminishing the capacity, the string ";
//   t.print();
//   std::cout<<"takes up ";
//   std::cout<<t.capacity();
//   std::cout<<" bytes.";
//   std::cout<<std::endl;
//
// };
//
// void test_empty(string t){
//   std::cout<< "Testing the emptyness of a string"<<std::endl;
//   std::cout<<"The string: ";
//   t.print();
//   std::cout<<"is empty"<<std::endl;
//   std::cout<<t.empty()<<std::endl;
//   t.clear();
//   std::cout<<"After clearin it, the string: ";
//   t.print();
//   std::cout<<"is empty"<<std::endl;
//   std::cout<<t.empty();
//   std::cout<<std::endl;
// };
//
//
// void test_operator_plus(string a, string b, char c){
//   std::cout << " + operator with one character "<<std::endl;
//   string output = a + c;
//   output.print();
//   std::cout << " + operator with two strings "<<std::endl;
//   output = a + b;
//   output.print();
//   std::cout <<std::endl;
// };
