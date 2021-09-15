#pragma once
#include<string>
#include<iostream>

class User
{
private:
  unsigned int age;
  std::string name;
  float height;
  float weight;
public:
  User(unsigned int age, const char* name, float height, float weight);
  ~User();
  user::usinged int GetAge() const
  std:: string GetName() const;
  float GetHeigth() const;
  float Get Weigth() const;

  void SetAge(int age);
  void SetName(std::string name);
  void SetHeight(float height);
  void SetWeigth(float weight);
};