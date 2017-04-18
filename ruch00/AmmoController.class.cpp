#include "AmmoController.class.hpp"

AmmoController::AmmoController(void){
  this->ammoList = new AmmoList();
  this->ammoList->ammo = NULL;
  this->ammoShot = 0;
  return;
}

AmmoController::AmmoController(AmmoController const &src) {
  *this = src;
  return;
}

AmmoController &AmmoController::operator=(AmmoController const & src)  {
this->ammoList = src.ammoList;
  return *this;
}

AmmoController::~AmmoController(void) {
  struct AmmoList *tmp;
  Ammo *tmp2;
  while (this->ammoList != NULL)
  {
    tmp = this->ammoList;
    tmp2 = this->ammoList->ammo;
    this->ammoList = this->ammoList->next;
    delete tmp2;
    delete tmp;
  }
  delete this->ammoList;
  return;
}

void AmmoController::mooveAmmo(void)
{
  struct AmmoList *tmp = this->ammoList;

  while (this->ammoList != NULL)
  {

    if (this->ammoList->ammo)
    {
      this->ammoList->ammo->goUp();
      this->ammoList->ammo->show();
    }
    this->ammoList = this->ammoList->next;

  }
  this->ammoList = tmp;
}


void AmmoController::addAmmo(Ammo *ammo)
{
  struct AmmoList *tmp = this->ammoList;
  struct AmmoList *newAmmo = new AmmoList();
  while (this->ammoList->next != NULL)
  {
    this->ammoList = this->ammoList->next;
  }
  struct AmmoList *tmp2 = this->ammoList->next;
  this->ammoList->next = newAmmo;
  this->ammoList->next->next = tmp2;
  this->ammoList->next->ammo = ammo;
  this->ammoList = tmp;
  this->ammoShot += 1;
}
int AmmoController::getAmmo() {
  return this->ammoShot;
}
void AmmoController::deleteAmmo(Ammo *ammo)
{
  struct AmmoList *tmp;
  if (this->ammoList->ammo == ammo)
  {
    delete this->ammoList->ammo;
    tmp = this->ammoList;
    this->ammoList = this->ammoList->next;
    delete tmp;
  }
  else
  {
    while (this->ammoList->next && this->ammoList->next->ammo != ammo)
    {
      this->ammoList = this->ammoList->next;
    }
    if (this->ammoList->next)
    {
      tmp = this->ammoList->next->next;
      delete this->ammoList->next->ammo;
      delete this->ammoList->next;
      this->ammoList->next = tmp;
    }
  }
}
