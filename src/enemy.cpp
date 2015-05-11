// Enemy Class

class Enemy {
private:
	int HPRemaining;
	int defaultHP;
	bool dead = false;
	
	void removeHP(int amount) {
		dead = (this->HPRemaining - amount) <= 0 ? true : false;
		this->HPRemaining -= amount;
	}
public:
	virtual void attack() {}	// Provides a virtual template for the attack
	
	void recieveDamage(int amount) {
		if (!this->dead) this->removeHP(amount);
	}
	
	bool isDead() {
		return this->dead;
	}
};

// The bull has now inherited the Enemy class
class Bull: public Enemy {
public:
	void attack() {/*Run attack code*/}
};
