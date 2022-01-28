#include<iostream>
#include<vector>

using namespace std;

int wateringPlants(vector<int>& plants, int capacity) 
    {
        int water = capacity; // количество воды в лейке
        int steps = 0; // всего шагов

        for(int i = 0; i < plants.size(); i++) //идём по грядке 
            {
                if(water => plants[i]) // если в лейке воды достаточно
                    {
                        steps++; 
                    } else 
                    {
                        steps += (i * 2) + 1; // поход к источнику воды и обратно к следующей грядке
                        water = capacity; // доливаем в лейку воды
                    };
                water = water - plants[i] // полив 
            };
        return steps;
    };

int main()
    {
        
    };

