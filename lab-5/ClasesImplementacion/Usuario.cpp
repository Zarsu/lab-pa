#include "../Clases/Usuario.h"

Usuario::Usuario(string email, string contrasenia)
{
  this->email = email;
  this->contrasenia = contrasenia;
}

bool Usuario::validar(string contrasenia)
{
  return this->contrasenia == contrasenia;
}

string Usuario::getEmail(string email)
{
  return this->email;
}

Usuario::~Usuario()
{
}