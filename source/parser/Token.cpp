#include "parser/Token.h"
namespace tcc {
    Trivia::Trivia(TriviaKind kind, std::string_view text)
        : kind(kind), text(text) {
    }

    TriviaKind Trivia::getKind() const {
        return kind;
    }

    std::string_view Trivia::getText() const {
        return text;
    }

    Token::Token(TokenKind kind, std::string_view text)
        : kind(kind), text(text) {
    }

    Token::Token()
        : kind(TokenKind::Unknown), text("") {
    }

    TokenKind Token::getKind() const {
        return kind;
    }

    std::string_view Token::getText() const {
        return text;
    }
} // namespace tcc