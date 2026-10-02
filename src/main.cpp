#include "Commands/CommandRegistry.hpp"
#include "InputHandler/Dispatcher.hpp"
#include "InputHandler/Parser.hpp"
#include "Storage/KeyValueStore.hpp"
#include <iostream>
#include <type_traits>
#include <variant>
void printResult(const kichi::commands::CommandResult& r){std::visit([](const auto& v){using T=std::decay_t<decltype(v)>;if constexpr(std::is_same_v<T,std::monostate>)std::cout<<"OK\n";else if constexpr(std::is_same_v<T,bool>)std::cout<<(v?"true":"false")<<"\n";else std::cout<<v<<"\n";},r);}
int main(){kichi::storage::KeyValueStore store;kichi::commands::CommandRegistry registry;kichi::input::Dispatcher dispatcher(registry);std::cout<<"KiChi C++ Core\nType EXIT to quit.\n";std::string line;while(std::getline(std::cin,line)){if(line=="EXIT")break;if(line.empty())continue;try{auto p=kichi::input::parse(line);printResult(dispatcher.dispatch(store,p));}catch(const std::exception& e){std::cerr<<"Error: "<<e.what()<<'\n';}}}
