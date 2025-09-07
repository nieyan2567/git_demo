#include <stdio.h>

typedef struct {
    char* name;
    int age;
    char* breed;
} Dog;

typedef void (*dog_information)(Dog*);

void dog_init(Dog* dog, char* name, int age, char* breed);
void dog_activity(Dog* dog, dog_information activity);

void dog_owner(Dog* dog, char* owner);
void eat_food(Dog* dog);
void play_fetch(Dog* dog);
void sleep(Dog* dog);


int main(void) {

    Dog my_dog;
    dog_init(&my_dog, "Buddy", 3, "Golden Retriever");

    dog_owner(&my_dog, "Alice");
    dog_activity(&my_dog, eat_food);
    dog_activity(&my_dog, play_fetch);
    dog_activity(&my_dog, sleep);
    
    
    return 0;
}

void dog_init(Dog* dog, char* name, int age, char* breed) {
    if (dog == NULL || name == NULL || breed == NULL) {
        printf("Error: Invalid input to dog_init.\n");
        return;
    }
    dog->name = name;
    dog->age = age;
    dog->breed = breed;
}

void dog_activity(Dog* dog, dog_information activity) {
    if (activity == NULL)
    {
        printf("Error: Invalid activity function.\n");
        return;
    }
    
    activity(dog);
}


void dog_owner(Dog* dog, char* owner_name) {
    printf("%s is owned by %s.\n", dog->name, owner_name);
}

void eat_food(Dog* dog) {
    printf("%s is eating.\n", dog->name);
}
void play_fetch(Dog* dog) {
    printf("%s is playing fetch.\n", dog->name);
}
void sleep(Dog* dog) {
    printf("%s is sleeping.\n", dog->name);
}