#include <stdio.h>

// Define a structure to store Pokémon information
struct Pokemon {
    char name[12];
    char type1[8];
    char type2[8];
    float height;
    float weight;
};

// Define an array of struct Pokemon to store information of all 151 Pokémon
struct Pokemon pokedex[151] = {
    {"Bulbasaur", "Grass", "Poison", 0.7, 6.9},
    // Add information for the rest of the Pokémon here...
};

int main() {
    int dexNumber;
    printf("Enter a Pokédex number between 1 and 151: ");
    scanf("%d", &dexNumber);

    // Check if the input is within the valid range
    if (dexNumber < 1 || dexNumber > 151) {
        printf("Invalid Pokédex number.\n");
        return 1; // Exit with an error code
    }

    // Display information of the Pokémon corresponding to the input dexNumber
    printf("Name: %s\n", pokedex[dexNumber - 1].name);
    printf("Type: %s", pokedex[dexNumber - 1].type1);
    if (pokedex[dexNumber - 1].type2[0] != '\0') {
        printf("/%s", pokedex[dexNumber - 1].type2);
    }
    printf("\n");
    printf("Height: %.1f m\n", pokedex[dexNumber - 1].height);
    printf("Weight: %.1f kg\n", pokedex[dexNumber - 1].weight);

    return 0; // Exit successfully
}