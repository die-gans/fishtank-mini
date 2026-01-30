# Contributing to Fishtank Mini

Thank you for your interest in contributing! Here's how you can help:

## Getting Started

1. Fork the repository
2. Clone your fork: `git clone https://github.com/YOUR_USERNAME/fishtank-mini.git`
3. Create a feature branch: `git checkout -b feature/your-feature-name`
4. Make your changes
5. Commit: `git commit -am 'Add some feature'`
6. Push to your fork: `git push origin feature/your-feature-name`
7. Create a Pull Request

## Development Setup

```bash
# Install PlatformIO
pip install platformio

# Clone and enter project
cd fishtank-mini

# Build
pio run

# Upload to board
pio run --target upload

# Monitor serial
pio device monitor
```

## Code Style

- Use meaningful variable and function names
- Add comments for complex logic
- Keep functions focused and single-purpose
- Follow Arduino coding conventions

## Reporting Issues

Please include:
- Clear description of the issue
- Steps to reproduce
- Expected behavior
- Actual behavior
- Hardware/environment details

## Pull Request Process

1. Ensure all code builds successfully
2. Update README if necessary
3. Reference any related issues
4. Provide a clear description of changes
5. Keep PR focused on one feature/fix

Thank you for contributing!
