#ifndef KERNEL_ENGINE_USER_MANAGER_H
#define KERNEL_ENGINE_USER_MANAGER_H
#include <sys/types.h>
#include <unistd.h>
#include <map>
#include <deque>
#include "proto/dos.pb.h"

namespace dos{

class UserMgr {
public:
  UserMgr();
  // load users from /etc/passwd
  int SetUp();
  // append a line to /etc/passwd
  int AddUser(const User& user);
  // get a user
  int GetUser(const std::string& username, User* user);
  ~UserMgr();
private:
  int InitBash(const User& user);
private:
  std::map<std::string, User> user_dict_;
  std::deque<int32_t> uids_;
  std::deque<int32_t> gids_;
};

}// dos end
#endif

