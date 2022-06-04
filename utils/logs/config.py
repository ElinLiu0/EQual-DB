import logging
from datetime import datetime
DEFAULT_LEVEL = logging.DEBUG
DEFAULT_FORMAT = "[%(asctime)s][%(levelname)s][%(name)s]: %(message)s"
DEFAULT_LOG_NAME = f"logs/{datetime.now()}.log"