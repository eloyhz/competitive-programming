/*

DMOJ - Cave (ioi13p4)
https://dmoj.ca/problem/ioi13p4
Solution from Algorithmic Thinking book (https://nostarch.com/algorithmic-thinking)

Date: 30/04/2021

*/

#include "cave.h"

// Using Linear Search
void set_a_switch(int door, int switch_positions[], int door_for_switch[], int n)   {
    int i, result;
    int found = 0;

    for (i = 0; i < n; i++)
        if (door_for_switch[i] == -1)
            switch_positions[i] = 0;
    
    result = tryCombination(switch_positions);
    if (result != door) {            // current door is open
        for (i = 0; i < n; i++)
            if (door_for_switch[i] == -1)
                switch_positions[i] = 1;    // close current door
    }

    i = 0;
    while (!found)  {
        if (door_for_switch[i] == -1)
            switch_positions[i] = 1 - switch_positions[i];
        result = tryCombination(switch_positions);
        if (result != door)      // current door is open
            found = 1;
        else
            i++;
    }
    door_for_switch[i] = door;
}

// Using Binary Search
void set_a_switch(int door, int switch_positions[], int door_for_switch[], int n)   {
    int i, result;
    int low = 0, high = n - 1, mid;

    for (i = 0; i < n; i++)
        if (door_for_switch[i] == -1)
            switch_positions[i] = 0;
    
    result = tryCombination(switch_positions);
    if (result != door) {       // current door is open
        for (i = 0; i < n; i++)
            if (door_for_switch[i] == -1)
                switch_positions[i] = 1;
    }

    while (low != high)  {
        mid = (low + high) / 2;
        for (i = low; i <= mid; i++)
            if (door_for_switch[i] == -1)
                switch_positions[i] = 1 - switch_positions[i];
        result = tryCombination(switch_positions);
        if (result != door) {
            high = mid;
            for (i = low; i <= mid; i++)
                if (door_for_switch[i] == -1)
                    switch_positions[i] = 1 - switch_positions[i];
        }
        else
            low = mid + 1;
    }
    door_for_switch[low] = door;
    switch_positions[low] = 1 - switch_positions[low];
}

void exploreCave(int n) {
    int switch_positions[n], door_for_switch[n];
    int i;
    for (i = 0; i < n; i++)
        door_for_switch[i] = -1;
    for (i = 0; i < n; i++)
        set_a_switch(i, switch_positions, door_for_switch, n);
    answer(switch_positions, door_for_switch);
}

// Subtask 1: each switch i is associated with door i
void exploreCave(int n) {
    int switch_positions[n], door_for_switch[n];
    int i, result;
    for (i = 0; i < n; i++) {
        switch_positions[i] = 1;
        door_for_switch[i] = i;
    }

    for (i = 0; i < n; i++) {
        result = tryCombination(switch_positions);
        if (result == i)    // door i is closed
            switch_positions[i] = 0; 
    }
    answer(switch_positions, door_for_switch);
}
