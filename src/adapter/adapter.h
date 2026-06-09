#pragma once

#include <iostream>
#include <memory>
#include <string>

class Player {
public:
    virtual ~Player() = default;
    virtual void play(const std::string &path) = 0;
};

class VLCPlayer {
public:
    void openMedia(const std::string &path) {
        std::cout << " open media " << path << std::endl;
    }

    void start() {
        std::cout << " start play. " << std::endl;
    }
};

class VLCPlayerAdapter : public Player {
public:
    explicit VLCPlayerAdapter(std::unique_ptr<VLCPlayer> vlcPlayer) : vlcPlayer(std::move(vlcPlayer)) {}

    void play(const std::string &path) override {
        vlcPlayer->openMedia(path);
        vlcPlayer->start();
    }

private:
    std::unique_ptr<VLCPlayer> vlcPlayer;
};