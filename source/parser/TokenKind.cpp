#include "parser/TokenKind.h"

namespace tcc {
    std::ostream& operator<<(std::ostream& os, TokenKind kind) {
        os << toString(kind);
        return os;
    }

    // clang-format off
    std::string_view toString(TokenKind kind) {
        switch (kind) {
            case TokenKind::Unknown: return "Unknown";
            case TokenKind::Integer: return "Integer";
            case TokenKind::HexInteger: return "HexInteger";
            case TokenKind::BinaryInteger: return "BinaryInteger";
            case TokenKind::Plus: return "Plus";
            case TokenKind::Minus: return "Minus";
            case TokenKind::Multiply: return "Multiply";
            case TokenKind::Divide: return "Divide";
            case TokenKind::OpenParen: return "OpenParen";
            case TokenKind::CloseParen: return "CloseParen";
            case TokenKind::EndOfFile: return "EndOfFile";
            case TokenKind::UnderLine: return "UnderLine";
            default: return "";
        }
    }
    // clang-format on

    decltype(TokenKind_traits::values) TokenKind_traits::values = {
        TokenKind::Unknown,
        TokenKind::Integer,
        TokenKind::HexInteger,
        TokenKind::BinaryInteger,
        TokenKind::Plus,
        TokenKind::Minus,
        TokenKind::Multiply,
        TokenKind::Divide,
        TokenKind::OpenParen,
        TokenKind::CloseParen,
        TokenKind::EndOfFile,
        TokenKind::UnderLine,
    };
}  // namespace tcc