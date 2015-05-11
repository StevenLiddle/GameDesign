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