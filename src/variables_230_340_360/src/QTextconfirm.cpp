#include "../include/QTextconfirm.hpp"

QTextconfirm::QTextconfirm(std::uint8_t value) : Variable("Q_TEXTCONFIRM", value) {}

QTextconfirm::QTextconfirm(const nlohmann::json & j, const std::string & order) : Variable("Q_TEXTCONFIRM", j, order) {}