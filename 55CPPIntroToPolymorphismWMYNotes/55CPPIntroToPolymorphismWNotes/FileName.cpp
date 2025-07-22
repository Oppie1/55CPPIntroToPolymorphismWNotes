#include <iostream>
using namespace std;

class Enemy {
protected:
	int attackPower;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
};

class Ninja : public Enemy {
public:
	void attack()
	{
		cout << "i am a ninja, ninja chop! -" << attackPower << endl;
	}
};

class Monster : public Enemy {
public:
	void attack()
	{
		cout << "monster must eat you!!!!! -" << attackPower << endl;
	}
};


int main() {
	Ninja n; //Anything that object "n" can do a ninja can do."n" object
	Monster m;//"m" obkect
	Enemy *enemy1 = &n;//"enemy1" object
	//Set to address of out ninja object. Becuase this ninja object is
	//of type enemy, all nijas are enemys, all monsters are enemys and that is why we can set
	//the addreess to the pointer (*enemy1).  Anything a ninja can do a monster can do.
	Enemy* enemy2 = &m;//This is setting enemy2 to monster(m) and can be used to determine attack later.
	enemy1->setAttackPower(29);//This sets the attack power of ninja(n) (enemy1)
	//Any enemy object you can call attackPower since both have that quality.
	//Computer knows that we are talking about ninja ("n") "enemy1" is set equal to it
	enemy2->setAttackPower(99);//This sets the attack power of monster(m) enemy2
	n.attack();//This calls out to function outside of main to use ninja "n" cout with (29) in parameter
	m.attack();//This calls out to function outside of main to use monster "m" cout with (99) as parameter
}


//Every enemy has an attack power. So each enemy object is set to a "n" or "m" object.