#include "InputHandler/Dispatcher.hpp"
#include <stdexcept>
namespace kichi::input {Dispatcher::Dispatcher(commands::CommandRegistry& r):registry_(r){} commands::CommandResult Dispatcher::dispatch(storage::Storage& s,const ParsedArgument& p)const{auto* c=registry_.getCommand(p.command);if(!c)throw std::invalid_argument("Unknown command: "+p.command);return c->execute(s,p.arguments);}}
