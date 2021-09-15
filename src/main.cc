#include<iostream>
#include"Person.hh"
#include"User.hh"

int main()
{   
    /*Person* person = {new Person(19,"Alberto", 1.8f, 83f)};
    std::cout << person->name << std::endl;
    std::cout << person->age << std::endl;
    std::cout << person->height << std::endl;
    std::cout << person->weight << std::endl;
    std::cin.get();*/
   
    //std::cin.get();
    User* user1(new User(19,"Alberto", 1.80f,83.f));
    std::cout << person->GetName() << std::endl;
    std::cout << person->GetAge() << std::endl;
    std::cout << person->GetHeight() << std::endl;
    std::cout << person->GetWeight() << std::endl

    user1->SetHeight(0);
    std::cout << user1->GetHeight() << std::endl;
    
    user1->SetName("Alberto");
    std::cout << user1->GetName() << std::endl;
    
    delete user1;
    
    std::cin.get();
    return 0;
}