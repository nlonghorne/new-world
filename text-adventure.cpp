#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <string>

// Combat mechanics - returns damage to you and damage to enemy
std::vector<int> combat(int mc_damage, int enemy_damage, std::string enemy_type) {
	int counter_damage = mc_damage * 0.25;
	int enemy_counter_damage = enemy_damage * 0.25;
	int attack_choice;
	srand (time(NULL));
	int enemy_attack = rand() % 3 + 1;
	if (enemy_attack == 1) {
		std::cout << enemy_type << " prepares to lunge!\nWhat do you do?\n";
	}
	else if (enemy_attack == 2){
		std::cout << enemy_type<< " readies themself for your attack!\nWhat do you do?\n";
	}
	else {
		std::cout << enemy_type << " takes up a defensive stance!\nWhat do you do?\n";
	}
	
	std::cout << "1) Attack\n";
	std::cout << "2) Counter\n";
	std::cout << "3) Defend\n\n1";
	// std::cout << "4) Use item\n";
	std::cin >> attack_choice;
	if (attack_choice == 1) {
		std::cout << "You lunge towards the lizard dagger in hand...\n";
	}
	else if (attack_choice == 2) {
		std::cout << "You prepare to counter " << enemy_type <<"\'s attack...\n";
	}
	else if (attack_choice == 3) {
		std::cout << "You take up an defnsive stance, ready to block your opponents attack...\n";
	}
	else {
		std::cout << "Invalid choice, skip your turn\n";
	}

	if (attack_choice == 1){
		if (enemy_attack == 1) {
			std::cout << "You strike each other hard!\n";
			return {mc_damage, enemy_damage};
		}
		if (enemy_attack == 2) {
			std::cout << enemy_type << " sees your attack and counters easily!\n";
			return {counter_damage, enemy_damage};
		}
		if (enemy_attack == 3) {
			std::cout << enemy_type << " is ready and manages to block your attack!\n";
			//return {0, 0};
		}
	}
	else if (attack_choice == 2){
		if (enemy_attack == 1) {
			std::cout << enemy_type << " lunges at you, dagger poised to kill but you easily sidestep and counter!\n";
			return {mc_damage, enemy_counter_damage};
		}
		if (enemy_attack == 2) {
			std::cout << "You both wait for the other to make a move, but no one does...\n";
			//return {0, 0};
		}
		if (enemy_attack == 3) {
			std::cout << enemy_type << " sits back and waits for you to move...\n";
			//return {0, 0};
		}
	}
	else if (attack_choice == 3){
		if (enemy_attack == 1) {
			std::cout << enemy_type << " lunges at you, dagger poised to kill but you manage to block the attack!\n";
			//return {0, 0};
		}
		if (enemy_attack == 2) {
			std::cout << "You sit in a defensive stance and wait for " << enemy_type << ", but he just eyes you carefully...\n";
			//return {0, 0};
		}
		if (enemy_attack == 3) {
			std::cout << "You both sit back, waiting for the other to make the next move...\n";
			//return {0, 0};
		}
	}
}

int main() {
   int choice1, choice1_a, choice2, choice3, choice4, damage_received, damage_dealt;
   std::string name;
   // Enemy Stats
   int enemy_damage, enemy_hp;
   std::string enemy_type;
   // Character Stats
   int gold = 10;
   int armour = 0;
   int health = 50;
   int mc_damage = 5;
   int renown = 0;
   
   std::cout << "Before you begin this exciting adventure, please enter your name:\n";
   std::cin >> name;
   std::cout << "Your name is " << name << ". You begin with " << gold << " gold, " << health << " health, no armour and a rusty iron dagger\n\n";

   std::cout << "It is the 9th day of Summertide when you arrive at the bustling coastal city of Neverwinter.\n";
   std::cout << "The sun climbs high over your head as you disembark the old, rickety trade ship that brought you to the new world.\n";
   std::cout << "As you take your first steps into the thriving port of Neverwinter you cannot help but be overwhelmed with\n";
   std::cout << "wonderous sights and smells that assault your senses. There are an assortment of traders and stalls selling\n";
   std::cout << "everything from exotic looking fruits from Calimshan to weapons and armour from the dwarven stronghholds to the\n";
   std::cout << "north and even strange beasts that look like they should be in a childrens book.\n";
   std::cout << "The food and supplies are one thing but the people themselves are astonishing! Never have you seen so many\n";
   std::cout << "different races gathered in one place, even some you dont recognise. In fact, there are probably more races\n";
   std::cout << "here than there are people in your home town of Aramoor.\n\n";
   std::cout << "It is now time to begin your adventure in this new wondrous and magical world!\n";
   std::cout << "As you decide what to do first in this new land you observe the following sights:\n";
   std::cout << "1) A scuffle between a stout dwarf and shifty lizard man breaks out towards the edge of the docks\n";
   std::cout << "2) One particular stall seems to have the most amazing items, yet no one is buying anything?\n";
   std::cout << "3) The captain who brought you here looks well weathered, perhaps he can offer som advice about the city\n";
   std::cout << "4) You spot some large, heavy, iron gates that you believe will lead to the heart of Neverwinter\n";
   std::cin >> choice1;

   switch(choice1) {
       case 1 :
       std::cout << "A small crowd has now gathered round the dwarf and the lizard man as you move closer you notice\n";
       std::cout << "the dwarf is dressed in very fine clothes with a long red hair that has been tied back and an immaculately\n";
	   std::cout << "braided beard, however your keen eye notices an odd hair or two out of place and several pieces of his clothes\n";
	   std::cout << "have slight rips and tears. The lizard man however, is dressed in worn studded leather armour with two nasty looking\n";
	   std::cout << "curved, black daggers strapped to his sides, he has dark scaly skin with a viscous scar over his left eye.\n";
	   std::cout << "He is a good head or two taller than you and is at least twice as big as the dwarf. As you join the crowd, the dwarf\n";
	   std::cout << "shouts \"Ach somebody help me, this scaly bastard knifed by guard and tried to mug me!\"\n";
	   std::cout << "\"Sss he liessss\" the lizard man replies \"He was the one who attacked me, I was ssssimply defending myself\" As this\n";
	   std::cout << "exchange takes place a guard in plate armour with a golden lion emblazoned on his chest aproaches\n";
	   std::cout << "\"Now then, what's all this nonsense about\" The crowd immediately burst into life as they start tring to explain the\n";
	   std::cout << "incident to the guard, however, this causes more fighting as some of the crowd take the dwarfs side\n";
	   std::cout << "while some take the lizard mans side. The guard shouts \"SILENCE!\" and turns to you. \"You look like respectable young adventurer, who's responsible?\"\n";
	   std::cout << "1) The dwarf\n";
	   std::cout << "2) The lizard man\n";
	   std::cin >> choice1_a;
	   if (choice1_a == 1) {
	   	std::cout << "You inform the guard that it is in fact the dwarf who is to blame. The dwarf becomes red with anger and scream how he is\n";
		std::cout << "innocent while he is dragged away by the guard.\n";
	   	std::cout << "The lizard man strides over to you, \"Thank you friend, my name is Rizzuk, I am glad to make your aquaintance. That\n";
		std::cout << "nasssty little dwarf was much trouble indeed. As a token of my thanks, please take this.\" He hands you one of his black blades.\n";
	   	std::cout << "\"That is genuine obsssidian my friend, it has ssserved me well. Now I must be going, farewell.\"\n\n";
	   	std::cout << "You gained an OBSIDIAN DAGGER\n\n";
	   	mc_damage = 10;
	   	std::cout << "You take a moment to inspect your new weapon but when you look back up the lizzard man has disappeared.\n";
	   	std::cout << "You then decide it is time to explore the rest of the city.\n";
	   }
	   else if (choice1_a == 2) {
		std::cout << "You inform the guard that the lizard man was to blame. Unfortunately, this causes the liazrd man to go into a rage and he lunges\n";
		std::cout << "at you, knocking the guard down in the process. You see his black blades glistening in the bright sun as he tackles you to the ground.\n";
		std::cout << "you manage to roll up into a fighting stance and draw your dagger.\n\n";
		std::cout << "~~~~~~~~~~~~~~~~\n";
		std::cout << "     FIGHT!\n";
		std::cout << "~~~~~~~~~~~~~~~~\n";
		enemy_hp = 20;
		enemy_type = "The lizard man";
		enemy_damage = 5;
		while (enemy_hp > 0) {
			std::vector<int> damage(combat(mc_damage, enemy_damage, enemy_type));
			health -= damage[1];
			enemy_hp -= damage[0];
			if (damage[0] == 0 && damage[1] == 0) {
				std::cout << "No one takes damage!\n\n";
			}
			else if (damage[1] != 0 || damage[0] != 0) {
				std::cout << "You take " << damage[1] << " damage!\n";
				std::cout << "The Lizard man takes " << damage[0] <<" damage!\n";
			}
			if (health <= 0) {-+
				std::cout << "------------------\n";
				std::cout << "|You have died...|\n";
				std::cout << "------------------\n\n";
				std::cout << "Thanks for playing!\n";
				return 0;
			}
			std::cout << "Your health is " << health << "\n";
			std::cout << "The lizard mans health is " << enemy_hp << "\n\n";	
		}
		std::cout << "Congratulations! You defeated the lizard man.\n\nYou gain renown!\n\n";
		renown = renown + 1;
		
		}	
	}
}
