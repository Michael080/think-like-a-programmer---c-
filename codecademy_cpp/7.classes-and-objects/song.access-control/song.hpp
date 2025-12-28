#include <string>

class Song {

  std::string title;
  std::string artist;

  public:
    void add_title(std::string new_title);
    std::string get_title();

};
