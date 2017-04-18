#include "EnnemyController.hpp"

EnnemyController::EnnemyController(void){
    this->ennemyList = new EnnemyList();
    this->ennemyList->ennemy = NULL;
    this->ennemyDead = 0;
    return;
}

EnnemyController::EnnemyController(EnnemyController const &src) {
  this->ennemyDead = src.ennemyDead;
  return;
}

EnnemyController &EnnemyController::operator=(EnnemyController const & src) {

  this->ennemyDead = src.ennemyDead;
  return *this;
}
int EnnemyController::getScore(void) {
  return this->ennemyDead;
}
EnnemyController::~EnnemyController(void) {
    struct EnnemyList *tmp;
    Iennemy *tmp2;
    while (this->ennemyList != NULL)
    {
        tmp = this->ennemyList;
        tmp2 = this->ennemyList->ennemy;
        this->ennemyList = this->ennemyList->next;
        delete tmp2;
        delete tmp;
    }
    delete this->ennemyList;
  return;
}

void EnnemyController::mooveEnnemy(void)
{
    struct EnnemyList *tmp = this->ennemyList;
    while (this->ennemyList != NULL)
    {
        if (this->ennemyList->ennemy)
        {
            this->ennemyList->ennemy->goDown();
            this->ennemyList->ennemy->show();
        }
        this->ennemyList = this->ennemyList->next;

    }
    this->ennemyList = tmp;
}

void EnnemyController::addEnnemy(Iennemy *ennemy)
{
    struct EnnemyList *tmp = this->ennemyList;
    struct EnnemyList *newEnnemy = new EnnemyList();
    while (this->ennemyList->next != NULL)
    {
        this->ennemyList = this->ennemyList->next;
    }
    struct EnnemyList *tmp2 = this->ennemyList->next;
    this->ennemyList->next = newEnnemy;
    this->ennemyList->next->next = tmp2;
    this->ennemyList->next->ennemy = ennemy;
    this->ennemyList = tmp;
}

EnnemyList *EnnemyController::deleteEnnemy(Iennemy *ennemy)
{
    struct EnnemyList *tmp = NULL;
    if (this->ennemyList->ennemy == ennemy)
    {
        delete this->ennemyList->ennemy;
        tmp = this->ennemyList;
        this->ennemyList = this->ennemyList->next;
        delete tmp;
        return this->ennemyList;
    }
    else
    {
        while (this->ennemyList->next && this->ennemyList->next->ennemy != ennemy)
        {
            this->ennemyList = this->ennemyList->next;
        }
        if (this->ennemyList->next)
        {
            tmp = this->ennemyList->next->next;
            delete this->ennemyList->next->ennemy;
            delete this->ennemyList->next;
            this->ennemyList->next = tmp;
            return tmp;
        }
    }
    this->ennemyDead +=1;
    return tmp;
}
