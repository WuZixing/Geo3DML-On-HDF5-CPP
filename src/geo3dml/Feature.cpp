#include <geo3dml/Feature.h>

using namespace geo3dml;

Feature::Feature() {

}

Feature::~Feature() {
	std::vector<Geometry*>::const_iterator citor = geometries_.cbegin();
	while (citor != geometries_.end()) {
		delete *citor;
		citor++;
	}
}

Feature& Feature::SetName(const std::string& name) {
	name_ = name;
	return *this;
}

std::string Feature::GetName() const {
	return name_;
}

Feature& Feature::AddGeometry(Geometry* g) {
	if (g == NULL)
		return *this;
	std::vector<Geometry*>::const_iterator citor = geometries_.cbegin();
	while (citor != geometries_.end()) {
		if (*citor == g)
			return *this;
		citor++;
	}
	geometries_.push_back(g);
	return *this;
}

int Feature::GetGeometryCount() const {
	return (int)geometries_.size();
}

Geometry* Feature::GetGeometryAt(int i) const {
	return geometries_.at(i);

}

Feature& Feature::SetParentFeatureClass(const std::string& id) {
	parentFeatureClassId_ = id;
	return *this;
}

std::string Feature::GetParentFeatureClass() const {
	return parentFeatureClassId_;
}

Feature& Feature::SetField(const FieldValue& fv) {
	fieldValues_[fv.FieldName()] = fv;
	return *this;
}

const FieldValue* Feature::GetField(const std::string& name) const {
	if (fieldValues_.find(name) != fieldValues_.cend()) {
		return &(fieldValues_.find(name)->second);
	} else {
		return nullptr;
	}
}

std::vector<std::string> Feature::GetFieldNames() const {
	std::vector<std::string> names;
	std::map<std::string, geo3dml::FieldValue>::const_iterator citor = fieldValues_.cbegin();
	while (citor != fieldValues_.cend()) {
		names.push_back(citor->first);
		++citor;
	}
	return names;
}

bool Feature::GetMinimumBoundingRectangle(double& minX, double& minY, double& minZ, double& maxX, double& maxY, double& maxZ) const {
	size_t i =0, numberOfGeometries = geometries_.size();
	for (; i < numberOfGeometries; ++i) {
		if (geometries_[i]->GetMinimumBoundingRectangle(minX, minY, minZ, maxX, maxY, maxZ)) {
			break;
		}
	}
	if (i >= numberOfGeometries) {
		return false;
	}
	double x[2], y[2], z[2];
	for (++i; i < numberOfGeometries; ++i) {
		if (!geometries_[i]->GetMinimumBoundingRectangle(x[0], y[0], z[0], x[1], y[1], z[1])) {
			continue;
		}
		if (x[0] < minX) {
			minX = x[0];
		}
		if (x[1] > maxX) {
			maxX = x[1];
		}
		if (y[0] < minY) {
			minY = y[0];
		}
		if (y[1] > maxY) {
			maxY = y[1];
		}
		if (z[0] < minZ) {
			minZ = z[0];
		}
		if (z[1] > maxZ) {
			maxZ = z[1];
		}
	}
	return true;
}
