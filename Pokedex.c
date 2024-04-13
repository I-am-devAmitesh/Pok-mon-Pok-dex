#include <stdio.h>

// Define a structure to store Pokémon information
struct Pokemon {
    char name[12]; // assuming a maximum name length of 12 characters
    char type1[8];// assuming a maximum type length of 8 characters
    char type2[8];// assuming a maximum secondary type length of 8 characters
    float height;
    float weight;
};

// Define an array of struct Pokemon to store information of all 151 Pokémon
struct Pokemon pokedex[151] = {
{"Bulbasaur", "Grass", "Poison", 0.7, 6.9},
{"Ivysaur", "Grass", "Poison", 1.0, 13.0},
{"Venusaur", "Grass", "Poison", 2.0, 100.0},
{"Charmander", "Fire", "", 0.6, 8.5},
{"Charmeleon", "Fire", "", 1.1, 19.0},
{"Charizard", "Fire", "Flying", 1.7, 90.5},
{"Squirtle", "Water", "", 0.5, 9.0},
{"Wartortle", "Water", "", 1.0, 22.5},
{"Blastoise", "Water", "", 1.6, 85.5},
{"Caterpie", "Bug", "", 0.3, 2.9},
{"Metapod", "Bug", "", 0.7, 9.9},
{"Butterfree", "Bug", "Flying", 1.1, 32.0},
{"Weedle", "Bug", "Poison", 0.3, 3.2},
{"Kakuna", "Bug", "Poison", 0.6, 10.0},
{"Beedrill", "Bug", "Poison", 1.0, 29.5},
{"Pidgey", "Normal", "Flying", 0.3, 1.8},
{"Pidgeotto", "Normal", "Flying", 1.1, 30.0},
{"Pidgeot", "Normal", "Flying", 1.5, 39.5},
{"Rattata", "Normal", "", 0.3, 3.5},
{"Raticate", "Normal", "", 0.7, 18.5},
{"Spearow", "Normal", "Flying", 0.3, 2.0},
{"Fearow", "Normal", "Flying", 1.2, 38.0},
{"Ekans", "Poison", "", 2.0, 6.9},
{"Arbok", "Poison", "", 3.5, 65.0},
{"Pikachu", "Electric", "", 0.4, 6.0},
{"Raichu", "Electric", "", 0.8, 30.0},
{"Sandshrew", "Ground", "", 0.6, 12.0},
{"Sandslash", "Ground", "", 1.0, 29.5},
{"Nidoran♀", "Poison", "", 0.4, 7.0},
{"Nidorina", "Poison", "", 0.8, 20.0},
{"Nidoqueen", "Poison", "Ground", 1.3, 60.0},
{"Nidoran♂", "Poison", "", 0.5, 9.0},
{"Nidorino", "Poison", "", 0.9, 19.5},
{"Nidoking", "Poison", "Ground", 1.4, 62.0},
{"Clefairy", "Fairy", "", 0.6, 7.5},
{"Clefable", "Fairy", "", 1.3, 40.0},
{"Vulpix", "Fire", "", 0.6, 9.9},
{"Ninetales", "Fire", "", 1.1, 19.9},
{"Jigglypuff", "Normal", "Fairy", 0.5, 5.5},
{"Wigglytuff", "Normal", "Fairy", 1.0, 12.0},
{"Zubat", "Poison", "Flying", 0.8, 7.5},
{"Golbat", "Poison", "Flying", 1.6, 55.0},
{"Oddish", "Grass", "Poison", 0.5, 5.4},
{"Gloom", "Grass", "Poison", 0.8, 8.6},
{"Vileplume", "Grass", "Poison", 1.2, 18.6},
{"Paras", "Bug", "Grass", 0.3, 5.4},
{"Parasect", "Bug", "Grass", 1.0, 29.5},
{"Venonat", "Bug", "Poison", 1.0, 30.0},
{"Venomoth", "Bug", "Poison", 1.5, 12.5},
{"Diglett", "Ground", "", 0.2, 0.8},
{"Dugtrio", "Ground", "", 0.7, 33.3},
{"Meowth", "Normal", "", 0.4, 4.2},
{"Persian", "Normal", "", 1.0, 32.0},
{"Psyduck", "Water", "", 0.8, 19.6},
{"Golduck", "Water", "", 1.7, 76.6},
{"Mankey", "Fighting", "", 0.5, 28.0},
{"Primeape", "Fighting", "", 1.0, 32.0},
{"Growlithe", "Fire", "", 0.7, 19.0},
{"Arcanine", "Fire", "", 1.9, 155.0},
{"Poliwag", "Water", "", 0.6, 12.4},
{"Poliwhirl", "Water", "", 1.0, 20.0},
{"Poliwrath", "Water", "Fighting", 1.3, 54.0},
{"Abra", "Psychic", "", 0.9, 19.5},
{"Kadabra", "Psychic", "", 1.3, 56.5},
{"Alakazam", "Psychic", "", 1.5, 48.0},
{"Machop", "Fighting", "", 0.8, 19.5},
{"Machoke", "Fighting", "", 1.5, 70.5},
{"Machamp", "Fighting", "", 1.6, 130.0},
{"Bellsprout", "Grass", "Poison", 0.7, 4.0},
{"Bellsprout", "Grass", "Poison", 0.7, 4.0},
{"Weepinbell", "Grass", "Poison", 1.0, 6.4},
{"Victreebel", "Grass", "Poison", 1.7, 15.5},
{"Tentacool", "Water", "Poison", 0.9, 45.5},
{"Tentacruel", "Water", "Poison", 1.6, 55.0},
{"Geodude", "Rock", "Ground", 0.4, 20.0},
{"Graveler", "Rock", "Ground", 1.0, 105.0},
{"Golem", "Rock", "Ground", 1.4, 300.0},
{"Ponyta", "Fire", "", 1.0, 30.0},
{"Rapidash", "Fire", "", 1.7, 95.0},
{"Slowpoke", "Water", "Psychic", 1.2, 36.0},
{"Slowbro", "Water", "Psychic", 1.6, 78.5},
{"Magnemite", "Electric", "Steel", 0.3, 6.0},
{"Magneton", "Electric", "Steel", 1.0, 60.0},
{"Farfetch'd", "Normal", "Flying", 0.8, 15.0},
{"Doduo", "Normal", "Flying", 1.4, 39.2},
{"Dodrio", "Normal", "Flying", 1.8, 85.2},
{"Seel", "Water", "", 1.1, 90.0},
{"Dewgong", "Water", "Ice", 1.7, 120.0},
{"Grimer", "Poison", "", 0.9, 30.0},
{"Muk", "Poison", "", 1.2, 30.0},
{"Shellder", "Water", "", 0.3, 4.0},
{"Cloyster", "Water", "Ice", 1.5, 132.5},
{"Gastly", "Ghost", "Poison", 1.3, 0.1},
{"Haunter", "Ghost", "Poison", 1.6, 0.1},
{"Gengar", "Ghost", "Poison", 1.5, 40.5},
{"Onix", "Rock", "Ground", 8.8, 210.0},
{"Drowzee", "Psychic", "", 1.0, 32.4},
{"Hypno", "Psychic", "", 1.6, 75.6},
{"Krabby", "Water", "", 0.4, 6.5},
{"Kingler", "Water", "", 1.3, 60.0},
{"Voltorb", "Electric", "", 0.5, 10.4},
{"Electrode", "Electric", "", 1.2, 66.6},
{"Exeggcute", "Grass", "Psychic", 0.4, 2.5},
{"Exeggutor", "Grass", "Psychic", 2.0, 120.0},
{"Cubone", "Ground", "", 0.4, 6.5},
{"Marowak", "Ground", "", 1.0, 45.0},
{"Hitmonlee", "Fighting", "", 1.5, 49.8},
{"Hitmonchan", "Fighting", "", 1.4, 50.2},
{"Lickitung", "Normal", "", 1.2, 65.5},
{"Koffing", "Poison", "", 0.6, 1.0},
{"Weezing", "Poison", "", 1.2, 9.5},
{"Rhyhorn", "Ground", "Rock", 1.0, 115.0},
{"Rhydon", "Ground", "Rock", 1.9, 120.0},
{"Chansey", "Normal", "", 1.1, 34.6},
{"Tangela", "Grass", "", 1.0, 35.0},
{"Kangaskhan", "Normal", "", 2.2, 80.0},
{"Horsea", "Water", "", 0.4, 8.0},
{"Seadra", "Water", "", 1.2, 25.0},
{"Goldeen", "Water", "", 0.6, 15.0},
{"Seaking", "Water", "", 1.3, 39.0},
{"Staryu", "Water", "", 0.8, 34.5},
{"Starmie", "Water", "Psychic", 1.1, 80.0},
{"Mr. Mime", "Psychic", "Fairy", 1.3, 54.5},
{"Scyther", "Bug", "Flying", 1.5, 56.0},
{"Jynx", "Ice", "Psychic", 1.4, 40.6},
{"Electabuzz", "Electric", "", 1.1, 30.0},
{"Magmar", "Fire", "", 1.3, 44.5},
{"Pinsir", "Bug", "", 1.5, 55.0},
{"Tauros", "Normal", "", 1.4, 88.4},
{"Magikarp", "Water", "", 0.9, 10.0},
{"Gyarados", "Water", "Flying", 6.5, 235.0},
{"Lapras", "Water", "Ice", 2.5, 220.0},
{"Ditto", "Normal", "", 0.3, 4.0},
{"Eevee", "Normal", "", 0.3, 6.5},
{"Vaporeon", "Water", "", 1.0, 29.0},
{"Jolteon", "Electric", "", 0.8, 24.5},
{"Flareon", "Fire", "", 0.9, 25.0},
{"Porygon", "Normal", "", 0.8, 36.5},
{"Omanyte", "Rock", "Water", 0.4, 7.5},
{"Omastar", "Rock", "Water", 1.0, 35.0},
{"Kabuto", "Rock", "Water", 0.5, 11.5},
{"Kabutops", "Rock", "Water", 1.3, 40.5},
{"Aerodactyl", "Rock", "Flying", 1.8, 59.0},
{"Snorlax", "Normal", "", 2.1, 460.0},
{"Articuno", "Ice", "Flying", 1.7, 55.4},
{"Zapdos", "Electric", "Flying", 1.6, 52.6},
{"Moltres", "Fire", "Flying", 2.0, 60.0},
{"Dratini", "Dragon", "", 1.8, 3.3},
{"Dragonair", "Dragon", "", 4.0, 16.5},
{"Dragonite", "Dragon", "Flying", 2.2, 210.0},
{"Mewtwo", "Psychic", "", 2.0, 122.0},
{"Mew", "Psychic", "", 0.4, 4.0}
    // You can add information for the rest of the Pokémon here...
};

int main() {
    int dexNumber;
    printf("Enter a Pokédex number between 1 and 151: ");
    scanf("%d", &dexNumber);

    // Check if the input is within the valid range
    if (dexNumber < 1 || dexNumber > 151) {
        printf("POKEMON NOT FOUND YET.\n");
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