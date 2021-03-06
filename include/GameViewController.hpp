#pragma once

#include <cstddef>

namespace minesweeper {

struct Board;
struct Tile;
class GameView;

class GameViewController {
public:
    GameViewController(Board &board, GameView &gameView, std::size_t rows, std::size_t cols);

    void drawBoard() const;
    void revealBoard() const;

    int gameLoop();

private:
    void drawTile(const Tile &tile) const;
    void clickTile(Tile &tile);

    Board &board_;
    GameView &gameView_;
    std::size_t rows_;
    std::size_t cols_;
};

} // ns minesweeper
