#pragma once

#include <map>
#include <iostream>
#include <string>
#include <memory>

class User {
private:
    std::string name;
public:
    User(const std::string& _name) :name(_name) {};

    std::string getName() {
        return name;
    }
};

class WebSite {
public:
    virtual ~WebSite() = default;

    //网站只有一份，不可能每个用户创建一个网站，所以网站是共享的，用户是独立的
    virtual void Use(User &user) = 0;

protected:
    std::string content;
};

class NewsWebsite : public WebSite {
private:
    std::string name;
public:
    NewsWebsite(const std::string& content) {
        this->content = content;
    }

    void Use(User &user) {
        std::cout << " 用户：" << user.getName() << " read " << content << std::endl;
    }
};

class GameWebsite : public WebSite {
private:
    std::string name;
public:
    GameWebsite(const std::string& content) {
        this->content = content;
    }

    void Use(User &user) {
        std::cout << " 用户：" << user.getName() << " play " << content << std::endl;
    }
};

class FlyWightFactory {
private:
    std::map<std::string, std::shared_ptr<WebSite>> webSiteMap;
public:
    std::shared_ptr<WebSite> getWebSiteCategory(const std::string& key) {
        auto iter = webSiteMap.find(key);
        if (iter == webSiteMap.end()) {
            std::shared_ptr<WebSite> webSite;
            if (key == "新闻") {
                webSite = std::make_shared<NewsWebsite>("新闻");
            } else if (key == "游戏") {
                webSite = std::make_shared<GameWebsite>("游戏");
            }
            webSiteMap.try_emplace(key, webSite);
            return webSite;
        }
        return iter->second;
    }

    int getWebSiteCount() {
        return webSiteMap.size();
    }
};