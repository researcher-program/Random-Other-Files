#include <iostream>
using namespace std;
int main()
{

}

int playQuiz()
{
    char c;char otion;int score=0;
    std::cout << " Welcome To Quiz Game " << std::endl;
      std::cout << " Please Follow The Instructions " << std::endl;
         std::cout << " Step-1: Total 10 Questions Added! " << std::endl;
            std::cout << " Step-2: 1 Mark Per Right Answer! " << std::endl;
               std::cout << " Step-3: No Negative Mark Include! " << std::endl;
                  std::cout << " Step-4: Please Press/Click 's'/'S' Button To Start The Quiz!  " << std::endl;
                      std::cout << " Step-5: please Select The Option 'a','b','c','d' " << std::endl;

                  cin>>c;
                  if(c=='s'||c=='S')
                  {
                      cout<<"Q-1:- What is the capital of Bangladesh ? "<<endl;cout<<"(a)(b)(c)(d)"<<endl;cin>>option;if(option==''||option==""){score=score+1;}
                      else{score=score+0;}
                  }
                  else{std::cout << "You've entered Wrong Answer,,,Please enter 's'/'S'. " << std::endl;}

                  cin>>c;
                  if(c=='s'||c=='S')
                  {
                      cout<<"Q-2:- Who is the Prime Minister(PM) of Bangladesh ? "<<endl;cout<<"(a)(b)(c)(d)"<<endl;cin>>option;if(option==''||option==""){score=score+1;}
                      else{score=score+0;}
                  }
                  else{std::cout << "You've entered Wrong Answer,,,Please enter 's'/'S'. " << std::endl;}


                  cin>>c;
                  if(c=='s'||c=='S')
                  {
                      cout<<"Q-3:-What  is the National Bird of Bangladesh ? "<<endl;cout<<"(a)(b)(c)(d)"<<endl;cin>>option;if(option==''||option==""){score=score+1;}
                      else{score=score+0;}
                  }
                  else{std::cout << "You've entered Wrong Answer,,,Please enter 's'/'S'. " << std::endl;}


                  cin>>c;
                  if(c=='s'||c=='S')
                  {
                      cout<<"Q-4:- What is the National Animal of Bangladesh ? "<<endl;cout<<"(a)(b)(c)(d)"<<endl;cin>>option;if(option==''||option==""){score=score+1;}
                      else{score=score+0;}
                  }
                  else{std::cout << "You've entered Wrong Answer,,,Please enter 's'/'S'. " << std::endl;}


                  cin>>c;
                  if(c=='s'||c=='S')
                  {
                      cout<<"Q-5:- What is the National Flower of Bangladesh ? "<<endl;cout<<"(a)(b)(c)(d)"<<endl;cin>>option;if(option==''||option==""){score=score+1;}
                      else{score=score+0;}
                  }
                  else{std::cout << "You've entered Wrong Answer,,,Please enter 's'/'S'. " << std::endl;}

                  cin>>c;
                  if(c=='s'||c=='S')
                  {
                      cout<<"Q-6:-Who is the Cheif Minister(CM) of Bangladesh ? "<<endl;cout<<"(a)(b)(c)(d)"<<endl;cin>>option;if(option==''||option==""){score=score+1;}
                      else{score=score+0;}
                  }
                  else{std::cout << "You've entered Wrong Answer,,,Please enter 's'/'S'. " << std::endl;}

}




