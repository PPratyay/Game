# Tic Tac Toe Game in C++

This project features an implementation of the classic Tic Tac Toe game in C++. The game provides users with three options in the main menu:

1. **Play With User:** Allows two players to take turns on the same computer.
2. **Play With AI:** Utilizes the Minimax algorithm to provide a challenging AI opponent.
3. **Exit Game:** Closes the game.

## How to Play

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/PPratyay/Game.git
2. **Compile and Run**</br>
    ```bash
   g++ -o TicTacToeGame TicTacToeGame.cpp
   ./TicTacToeGame
3. **Choose Game Mode**</br>
   Enter 1 to play with another user.</br>
   Enter 2 to play against the AI.</br>
   Enter 0 to exit the game.</br>

# Screenshots
![Screenshot](https://github.com/PPratyay/Game/blob/main/Screenshots/Screenshot%202024-07-19%20154210.png)
![Screenshot](https://github.com/PPratyay/Game/blob/main/Screenshots/Screenshot%202024-07-19%20154257.png)
![Screenshot](https://github.com/PPratyay/Game/blob/main/Screenshots/Screenshot%202024-07-19%20154327.png)
![Screenshot](https://github.com/PPratyay/Game/blob/main/Screenshots/Screenshot%202024-07-19%20154415.png)
![Screenshot](https://github.com/PPratyay/Game/blob/main/Screenshots/Screenshot%202024-07-19%20154428.png)
![Screenshot](https://github.com/PPratyay/Game/blob/main/Screenshots/Screenshot%202024-07-19%20154451.png)
![Screenshot](https://github.com/PPratyay/Game/blob/main/Screenshots/Screenshot%202024-07-19%20154517.png)
![Screenshot](https://github.com/PPratyay/Game/blob/main/Screenshots/Screenshot%202024-07-19%20154532.png)

# AI Implementation

The AI employs the Minimax algorithm, a strategy used in two-player turn-based games to determine the optimal move that results in the best possible outcome.

## How Minimax Works

### Recursive Tree Exploration
The algorithm constructs a game tree that includes all possible moves and their corresponding outcomes from the present state. Each node in the tree represents a distinct game state, while the edges denote the potential moves between these states.

### Maximizing and Minimizing Players
The algorithm distinguishes between two players: the maximizing player (typically the AI) and the minimizing player (the opponent or the user). The maximizing player seeks moves leading to the highest score, whereas the minimizing player seeks moves leading to the lowest score.

### Evaluation Function
Each leaf node in the tree is assigned a score based on the current game state. This score is derived from a heuristic function that evaluates the desirability of that specific game state for the maximizing player.

### Score Propagation
The algorithm then works its way back from the terminal nodes, passing scores upward through the tree. At each level, the maximizing player selects the move with the highest score, while the minimizing player chooses the move with the lowest score.

### Optimal Move Selection
The algorithm ultimately identifies the best move for the maximizing player by selecting the move with the highest score at the root of the tree.

## Importance in Tic Tac Toe
In the context of Tic Tac Toe, the Minimax algorithm ensures that the AI always makes the optimal move, making it unbeatable if both players play perfectly. This algorithm is particularly effective for games with a finite number of possible states, such as Tic Tac Toe, due to its relatively simple decision tree.

## Additional Information on Minimax Algorithm

### Algorithm Complexity
The complexity of the Minimax algorithm is O(b^d), where 'b' is the average number of legal moves at each point (branching factor), and 'd' is the maximum depth of the tree. For Tic Tac Toe, 'b' is typically 9 (the number of empty squares), and 'd' is at most 9 (the number of moves in a game).

### Alpha-Beta Pruning
To optimize the Minimax algorithm, Alpha-Beta Pruning can be applied. This technique reduces the number of nodes evaluated by the Minimax algorithm by pruning branches that cannot influence the final decision. This optimization maintains the same optimal move but with improved efficiency.

### Adaptability
While Minimax is highly effective for simple games like Tic Tac Toe, it can be adapted for more complex games such as Chess and Go. In these scenarios, the algorithm often incorporates additional strategies, heuristics, and optimizations to manage the increased complexity and depth of the game tree. This may include techniques such as:

- **Heuristic Evaluation Functions:** Advanced evaluation functions that assess the game state based on more sophisticated criteria than just win/loss/draw outcomes.
- **Transposition Tables:** Data structures used to store previously computed results for game states to avoid redundant calculations.
- **Iterative Deepening:** A search strategy that repeatedly explores the game tree to progressively deeper levels, allowing for a more flexible time management in decision-making.
- **Advanced Pruning Techniques:** Techniques beyond Alpha-Beta pruning, such as Principal Variation Search (PVS) and MTD(f), to further reduce the number of nodes evaluated.

These adaptations allow Minimax to be applied effectively to more complex and larger game spaces.

## Game Theory Basis
The Minimax algorithm is grounded in game theory and is used to solve zero-sum games, where one player's gain is another player's loss. The goal is to minimize the possible loss in a worst-case scenario, which is where the name "Minimax" originates.
