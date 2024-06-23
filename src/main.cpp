#include "Geode/binding/FLAlertLayer.hpp"
#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}

    auto alert = FLAlertLayer::create(
      "Skylar",
      "is",
      "gay"
    );

    alert->m_scene = this;
    alert->show();

    return true;
	}

};
