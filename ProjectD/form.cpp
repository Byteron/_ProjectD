#include <string>

#include "form.h"
#include "log.h"
#include "define.h"

// Construktor
Form::Form() {
	Log LOG;
	LOG.setLevel(DEBUGLEVEL);

	static size_t id = 1;
	id_ = id++;
	name_ = "";
	LOG.d("New Object: " + std::to_string(id_));
}

Form::~Form() {}

// Getter
size_t Form::getId() { return id_; }

std::string Form::getName() {
	return name_;
}
