#include "States.h"

State1::State1(StateChanger*changer):BaseState(changer){}
void State1::Initialize(){
}
void State1::Finalize(){
}
void State1::all(){
}

State2::State2(StateChanger*changer) : BaseState(changer) {}
void State2::Initialize() {
}
void State2::Finalize() {
}
void State2::all() {
}

State3::State3(StateChanger*changer) : BaseState(changer) {}
void State3::Initialize() {
}
void State3::Finalize() {
}
void State3::all() {
}

State4::State4(StateChanger*changer) : BaseState(changer) {}
void State4::Initialize() {
}
void State4::Finalize() {
}
void State4::all() {
}

State5::State5(StateChanger*changer) : BaseState(changer) {}
void State5::Initialize() {
}
void State5::Finalize() {
}
void State5::all() {
}

State6::State6(StateChanger*changer) : BaseState(changer) {}
void State6::Initialize() {
}
void State6::Finalize() {
}
void State6::all() {
}

State7::State7(StateChanger*changer) : BaseState(changer) {}
void State7::Initialize() {
}
void State7::Finalize() {
}
void State7::all() {
}

EndState::EndState(StateChanger*changer) : BaseState(changer) {}
void EndState::Initialize() {
}
void EndState::Finalize() {
}
void EndState::all() {
}