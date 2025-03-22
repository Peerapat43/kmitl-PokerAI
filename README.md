# kmitl-PokerAI
Peerapat Sukkasem 64011538
Pichayut Pichayapinyo 64011556
https://youtu.be/4KDn_5_A-Cs
1. Dowloand Anaconda https://www.anaconda.com/download
2. Run conda Prompt and create space for poker AI
conda create -n poker-ai python=3.9
3. install the Python libraries
pip install -r requirements.txt
4. Test playing poker-ai running in anaconda prompt
cd game
python poker_main.py
5. How to training your dataset Training: To reduce the complexity of the game tree, I solve separately for pre-flop and post-flop (flop, turn, river). This is done by limiting the possible betting rounds in each secenario
cd src
python postflop_holdem.py
python preflop_holdem.py
6. after training, you really need to reduce complexity dataset by abstraction.py
python abstraction.py
7. Now, Time to test and play with your performance dataset
cd game
python poker_main.py
