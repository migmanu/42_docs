#!/bin/bash
cd $(git rev-parse --show-toplevel) && git ls-files --others --exclude-standard --ignored | sed 's/.*\///'
